#include <bits/stdc++.h>
using namespace std;

#define sieve_size 10000010 //size of sieve,work upto 10^7
typedef long long ll;
typedef vector<int> vi;

ll Size;
bitset<sieve_size> bs;
vi primes;

void sieve()
{
    bs.set(); //set all bits to 1;
    bs[0] = bs[1] = 0;
    for(ll i=1; i<=sieve_size; i++){
        if(bs[i]){
            for(ll j=i*i; j<=sieve_size; j+=i) bs[j] = 0;
            primes.push_back((int)i);
        }
    }
}
bool isPrime(ll N)
{
    if(N<=sieve_size) return bs[N];
    int s = primes.size();
    for(int i=0; i<s; i++){
        if(N%primes[i]==0) return false;
    }
    return true;
}// note: only work for N <= (last prime in vi "primes")^2


int main()
{
    sieve();

    printf("%d\n", isPrime(2147483647));                        // 10-digits prime
    printf("%d\n", isPrime(136117223861LL));
}
