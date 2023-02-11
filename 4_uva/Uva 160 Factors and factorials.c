#include <stdio.h>
#include <string.h>
#include <math.h>
#define Max 101

char prime[Max];
void sieve();
int factors(int n, int arr[]);
void sieve()
{
    int i, j;
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
int factors(int n,int arr[])
{
    int i, div;
    if(prime[n]==0) arr[n]++;
    else{
        for(i=2; i<=sqrt(n); i++){
            if(prime[i]==0 && n%i==0){
                arr[i]++;
                div = n/i;
                factors(div, arr);
                break;
            }
        }
    }
    return n;
}
int main()
{
    sieve();
    int N,n, r, i,max,count, arr[Max];

    while(scanf("%d", &N) && N){
        memset(arr, 0, sizeof(arr));
        max = 0;
        for(n=2; n<=N; n++){
            r = factors(n,arr);
            if(r>max) max = r;
        }
        printf("%3d! =", N);
        count = 0;
        for(i=2; i<=max; i++){
            if(prime[i]==0){
                if(count==15) {
                    printf("\n%6c", ' ');
                    count = 0;
                }
                printf("%3d", arr[i]);
                ++count;
            }
        }
        printf("\n");
    }
    return 0;
}
