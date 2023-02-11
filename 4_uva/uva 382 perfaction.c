#include <stdio.h>

int main()
{
    int N, i, sum, check = 0;

    while(scanf("%d", &N) && N!=0){
        if(check==0){
            printf("PERFECTION OUTPUT\n");
            check = 1;
        }
        sum = 0;
        for(i=1; i<=N/2; i++){
            if(N%i==0){
                sum+=i;
            }
        }
        printf("%5d", N);
        if(sum==N) printf("  PERFECT\n");
        else if(sum<N) printf("  DEFICIENT\n");
        else printf("  ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");
    return 0;
}
