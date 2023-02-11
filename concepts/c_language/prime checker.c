#include <stdio.h>
#include <math.h>
#define Max 1000000

int main()
{
    int N, i, j, x;
    char prime[Max];
    for(i=0; i<Max; i++)
        prime[i] = 0;
    x = sqrt(Max);
    prime[0] = prime[1] = 1;
    for(i=2; i<=x; i++){
        if(prime[i]==0){
            for(j=2; i*j<Max; j++)
            prime[i*j] = 1;
        }
    }
    while(1){
        printf("Enter Number: ");
        scanf("%d", &N);
        if(prime[N]==0) printf("The number is prime.\n");
        else printf("The number is not prime.\n");
    }
    return 0;
}
