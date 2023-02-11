#include <stdio.h>

int main()
{
    long long int N, pices, cuts;

    while(scanf("%lld", &N)==1 && N>=0){
        pices = 1;
        for(cuts=0; cuts<=N; cuts++){
            pices+=cuts;
        }
        printf("%lld\n", pices);
    }
    return 0;
}
