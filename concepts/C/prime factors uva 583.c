#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define Max 1000000

int main()
{
    long long int N, i, j, x, num ;
    int factors[10000];
    char prime[Max];


    for(i=0; i<Max; i++){
        prime[i] = 0;
    }
    x = sqrt(Max);
    prime[0] = prime[1] = 1;
    for(i=4; i<Max; i+=2) prime[i] = 1;
    for(i=3; i<=x; i++){
        if(prime[i]==0){
            for(j=i*i; j<Max; j+=i) prime[j] = 1;
        }
    }
    while(scanf("%lld", &N)==1 & N!=0){
        num = N;
        N = abs(N);
        j = 0;
        for(i=2; i<=sqrt(N); i++){
            if(prime[i]==0){
                if((N%i)==0){
                    factors[j] = i;
                    ++j;
                    N/=i;
                    i = 1;
                }
            }
        }
        factors[j] = N;
        if(num<0) {
            printf("%lld = -1 x ", num);
            for(i=0; i<=j; i++){
                printf("%d", factors[i]);
                if(i<j) printf(" x ");
            }
            printf("\n");
        }
        else {
            printf("%lld = ", num);
            for(i=0; i<=j; i++){
                printf("%d", factors[i]);
                if(i<j) printf(" x ");
            }
            printf("\n");
        }
    }
    return 0;
}
