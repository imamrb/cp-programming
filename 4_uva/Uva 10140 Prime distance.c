#include <stdio.h>
#define Max 2147483648
char prime[Max];

void sieve()
{
    long int i, j;
    memset(prime, 0, sizeof(prime));
    prime[0] = prime[1] = 1;
    for(i=4; i<Max; i+=2) prime[i] = 1;
    for(i=3; i<=sqrt(Max); i++){
        if(prime[i]==0){
            for(j=i*i; j<Max; j+=i)
                prime[j] = 1;
        }
    }
    return;
}
int main()
{
    long int L, H, i, a, count, max , n1, n2, m1, m2;
    max = 0;
    while(scanf("%ld %ld", &L, &H)!=EOF){
        a = 0;
        count = 0;
        for(i=L; i<=H; i++){
           if(prime[i]==0){
              if(count){
                  dis = i - a;
                  ++count;
                  if(count == 2) min = dis, n1 = a, n2= i;
                  else if(dis<min) min = dis, n1 = a, n2 = i;
                  if(dis>max) max = dis, m1 = a, m2 = i;
                  a = i;
              }
              else a = i, count++;
           }
        }
        if(count>2) printf("%ld,%ld are closest, %ld,%ld are most distant.\n", n1, n2, m1, m2);
        else printf("There are no adjacent primes.\n");
    }
    return 0;
}
