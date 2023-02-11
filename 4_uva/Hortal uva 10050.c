#include <stdio.h>

int main()
{
    int T, N, P, pm, count, i, j, n, day, k, q;
    int arr[3651];

    scanf("%d", &T);
    while(T--){
        scanf("%d", &N);
        scanf("%d", &P);

        for(n=0; n<N; n++){
            arr[n] = 0;
        }
        for(i=0; i<P; i++){
            scanf("%d", &pm);

            k = pm / 7;
            if(k==0) k = 1;
            if(pm>7*k) q = pm - 7*k;
            else q = pm;

            day = 0;
            for(j=pm; j<=N; j+=pm){
                day +=q;
                if(day>7) day = day - 7;
                if(day%6!=0 && day%7!=0){
                    arr[j-1] = 1;
                }
            }
        }
        count = 0;
        for(n=0; n<N; n++){
            if(arr[n]==1){
               ++count;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
