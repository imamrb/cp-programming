#include <stdio.h>

int main()
{
    int N, i, j, temp, m, x;
    int a[5000];

    while(scanf ("%d", &N)!=EOF){
        a[0] = 1;
        temp = 0;
        m = 1;
        for(i=1; i<=N; i++){
            for(j=0; j<m; j++){
                x = a[j]*i + temp;
                a[j] = x % 10;
                temp = x/10;
            }
            while(temp){
                a[m++] = temp % 10;
                temp/=10;
            }
        }
        printf("%d!\n", N);
        for(j=m-1; j>=0; j--){
            printf("%d", a[j]);
        }
        putchar('\n');
    }
    return 0;
}
