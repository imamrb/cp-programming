#include <stdio.h>
#include <math.h>
#define Max 1000000
int main()
{
    long int t1, t2, i, j,n, sum, m, T, count, x;
    char prime[1000010];

    scanf("%ld", &T);

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
    while(T--){
        scanf("%ld %ld", &t1, &t2);

        count = 0;
        for(n=t1; n<t2; n++){
            if(prime[n]==0){
                sum = 0;
                m = n;
                while(m){
                    sum += m%10;
                    m/=10;
                }
                if(prime[sum]==0){
                    ++count;
                }
            }
        }
        printf("%ld\n", count);
    }
    return 0;
}
