#include <stdio.h>

int main()
{
    int N, i, j, swap, flip, k;
    int num[1000];

    while(scanf("%d", &N)!=EOF){
        for(i=0; i<N; i++){
            scanf("%d", &num[i]);
        }
        flip = 0;
        for(i=0; i<N; i++){
            for(j=N-1; j>i; j--){
                if(num[j-1]>num[j]){
                    swap = num[j-1];
                    num[j-1] = num[j];
                    num[j] = swap;
                    ++flip;
                }
            }
        }
        printf("Minimum exchange operations : %d\n", flip);
    }
    return 0;
}
