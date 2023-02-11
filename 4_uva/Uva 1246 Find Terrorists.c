#include <stdio.h>
#include <math.h>

#define Max 100001
char prime[Max];
void sieve()
{
    int i,j;
    for(i=0; i<Max; i++)
        prime[i] = 0;
    prime[0] = prime[1] = 1;
    for(i=4; i<Max; i+=2)
        prime[i] = 1;
    for(i=3; i<sqrt(Max); i++){
        if(prime[i]==0){
            for(j=i*i; j<Max; j+=i)
                prime[j] = 1;
        }
    }
    return;
}

int main()
{
    sieve();
    int factors[Max];
    int T,i,j,f,L,H,count,x,n;

    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &L, &H);
        j = 0;
        for(n=L; n<=H; n++){
            if(n==1) continue;
            if(prime[n]==0) factors[j++] = n;
            else {
                x = sqrt(n);
                count = 2;
                for(i=2; i<=x; i++){
                    if(n%i==0){
                        f = n/i;
                        if(i==f) count+=1;
                        else count +=2;
                    }
                }
                if(prime[count]==0) factors[j++] = n;
            }
        }
        if(j==0) printf("-1\n");
        else {
            for(i=0; i<j; i++){
                printf("%d", factors[i]);
                if(i<j-1) printf(" ");
                else printf("\n");
            }
        }
    }
    return 0;
}
