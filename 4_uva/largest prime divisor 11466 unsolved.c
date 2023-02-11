#include <stdio.h>
#include <math.h>
#define Max 100000
int main()
{
     unsigned long long int N, i, j, d, M, count;
     char prime[Max];

        for(i=0; i<Max; i++){
            prime[i] = 0;
        }
        prime[0] = prime[1] = 1;
        for(i=4; i<Max; i+=2) prime[i] = 1;
        for(i=3; i<=sqrt(Max); i++){
            if(prime[i]==0){
                for(j=i*i; j<Max; j+=i) prime[j] = 1;
            }
        }
        while(scanf("%llu", &N)==1 && N!=0){
        M = 1;
        count = 0;
        for(d=0; d<=N/2; d++){
            if(prime[d]==0){
                if(N%d==0){
                    if(d>M){
                        M = d;
                        ++count;
                    }
                }
            }
        }
        if(count>1) printf("%llu\n", M);
        else printf("-1\n");
     }
     return 0;
}
