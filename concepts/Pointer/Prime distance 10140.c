#include <stdio.h>
#include <math.h>
#define Max 10000001

char primes[Max];
long long int arr[Max];
int prime[Max];
int check_primality(long long int n);
void sieve();

int check_primality(long long int n){
    int x, j, check = 1;
    x = sqrt(n);
    for(j=0; prime[j]<=x; j++){
        if(n%prime[j]==0){
            check = 0;
            break;
        }
    }
    return check;
}
int main()
{
    sieve();
    long long int L, U, i, C1, C2, D1, D2, min, max, r, d, k;

    while(scanf("%lld %lld", &L, &U)!=EOF){
        i = L;
        k = 0;
        while(i<Max && i<=U){
            if(primes[i]==0)
                arr[k++] = i;
            ++i;
        }
        while(i>=Max && i<=U){
            r = check_primality(i);
            if(r) arr[k++] = i;
            ++i;
        }
        if(k>1){
            C1 = D1 = arr[0];
            C2 = D2 = arr[1];
            min = C2 - C1;
            max = min;

            for(i=1; i<k-1; i++){
                d = arr[i+1] - arr[i];
                if(d<min){
                    C2 = arr[i+1];
                    C1 = arr[i];
                    min = d;
                }
                if(d>max){
                    D2 = arr[i+1];
                    D1 = arr[i];
                    max = d;
                }
            }
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n", C1, C2 , D1, D2);
        }
        else printf("There are no adjacent primes.\n");
    }
}

void sieve()
{
    int i, j, x;

    for(i=0; i<Max; i++)
        primes[i] = 0;

    primes[0] = primes[1] = 1;
    for(i=4; i<Max; i+=2)
        primes[i] = 1;
    x = sqrt(Max);
    for(i=3; i<=x; i++){
        if(primes[i]==0){
            for(j=i*i; j<Max; j+=i)
                primes[j] = 1;
        }
    }
    j = 0;
    for(i=2; i<Max; i++){
        if(primes[i]==0)
            prime[j++] = i;
    }
}

