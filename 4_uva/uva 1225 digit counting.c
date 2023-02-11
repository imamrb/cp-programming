#include <stdio.h>

int main()
{
    int arr[10];
    int T, N, i, n, r, m;

    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        for(i=0; i<10; i++){
            arr[i] = 0;
        }
        for(n=1; n<=N; n++){
            m = n;
            while(m){
                r = m % 10;
                m/=10;
                arr[r]++;
            }
        }
        for(i=0; i<10; i++){
            printf("%d", arr[i]);
            if(i<9) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
