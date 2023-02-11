#include <stdio.h>
#include <math.h>
#define Max 1000000
int main()
{
    int num,i,j,check,count, k, x;
    int sum, diff, max, p, q, a, b;
    char prime[Max];

    for(i=0; i<Max; i++){
        prime[i] = 0;
    }
    x = sqrt(Max);
    prime[0] = prime[1] = 1;
    for(i=2; i<=x; i++){
        if(prime[i]==0){
            for(j=2; i*j<Max; j++) prime[i*j] = 1;
        }
    }
    while(scanf("%d", &num)==1 && num!=0){
        for(p=2; p<num; p++){
            check = 0;
            b = num - p;
            if(prime[b]==0){
                if(prime[p]==0){
                    a = p;
                    check = 1;
                    break;
                }
            }
        }
        if(check) printf("%d = %d + %d\n", num , a, b);
        else printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
