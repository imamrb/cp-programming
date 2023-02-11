#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define Max 1000001 //Sieve maximum size is 10^6 in

bitset<Max> isPrime;
vi prime;

void sieve()
{
    int i, j, x;
    isPrime.reset();

    isPrime[0] = isPrime[1] = 1; //Non prime numbers will be set to 1

    for(i=4; i<Max; i+=2 ) isPrime[i] = 1;

    prime.push_back(2);
    for(i=3; i*i<Max; i+=2){
        if(isPrime[i]==0){
            prime.push_back(i);
            for(j=i*i; j<Max; j+=i){  //if i==prime then i+i !=prime
                isPrime[j] = 1;
            }
        }
    }
}
//Prime factors Generation of a given number N
vi factorization(int N){
    vi factors;
    int id = 0, PF = prime[id];
    while(PF*PF <= N){
        while(N % PF == 0){
            N/=PF;
            factors.push_back(PF);
        }
        PF = prime[++id];
    }
    if(N!=1) factors.push_back(N); //at this point, if N is not 1 then N itself is a prime factor

    return factors;
}

int main()
{
    sieve();

    int i, len = prime.size();
    printf("Total Prime Number founds in range(1 - %d) is: %d\n", Max, len);
    for(i=0; i<len; i++){
        printf("%d ", prime[i]);
    }
    cout<<endl;

    //Prime Factorization
    printf("Prime Factor Test\n Enter a number: ");
    scanf("%d", &i);
    vi factors = factorization(i);
    for(auto i=factors.begin(); i!=factors.end(); i++) printf("%d ", *i);

}
