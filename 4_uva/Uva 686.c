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
    for(i=4; i<Max; i+=2) prime[i] = 1;
    for(i=3; i<=x; i++){
        if(prime[i]==0){
            for(j=i*i; j<Max; j+=i) prime[j] = 1;
        }
    }
    while(scanf("%d", &num)==1 && num!=0){
        max = 0;
        for(p=0; p<=num/2; p++){
            for(q=p; q<num; q++){
                if(prime[p] == 0 && prime[q]==0 && p+q==num){
                    diff = q -p;
                    if(diff>max){
                        max = diff;
                        a = p;
                        b = q;
                    }
                }
            }
        }
         printf("%d = %d + %d\n", num , a, b);
    }
    return 0;
}
