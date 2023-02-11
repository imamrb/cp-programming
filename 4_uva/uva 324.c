#include <stdio.h>

int main()
{
    int N, i, j, temp, m, x;
    int a[5000], arr[10];

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
        memset(arr, 0, sizeof(arr));
        for(i=0; i<m; i++){
            arr[a[i]]++;
        }
        printf("%d! --\n", N);
        for(i=0; i<5; i++){
            printf("%5c(%d)%5d",' ', i, arr[i]);
        }
        printf("\n");
        for(i=5; i<=9; i++){
            printf("%5c(%d)%5d",' ', i, arr[i]);
        }
        printf("\n");
    }
    return 0;
}

