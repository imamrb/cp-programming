/*
    Sift the Twos and sift the Threes,
    The Sieve of Eratosthenes.
    When the multiples sublime,
    The numbers that remain are Prime!
*/
//Sieve of Eratosthenes
#include <stdio.h>
#include <math.h>
#include <string.h>
#define Max 1000001
char primes[Max];
void sieve()
{
    int i, j, x;

    memset(primes, 0, sizeof(primes));

    primes[0] = primes[1] = 1;
    for(i=4; i<Max; i+=2)
        primes[i] = 1;
    x = sqrt(Max);
    for(i=3; i<=x; i+=2){
        if(primes[i]==0){
            for(j=i*i; j<Max; j+=i){
                primes[j] = 1;
            }
        }
    }
}
int main()
{
    sieve();
    int i, n;

    printf("Enter the number range to generate primes(<1,000,001): ");
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        if(primes[i]==0){
            printf("%d ", i);
        }
    }
    return 0;
}
