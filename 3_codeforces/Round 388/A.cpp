
#include <bits/stdc++.h>
using namespace std;

#define sieve_size 100010 //size of sieve,work upto 10^7
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

int arr[10000];
int prime_factor(int n)
{
    int i, j=0;

// find the number of 2's that divide n
    while(n%2==0){
        arr[j++] = 2;
        n-=2;
    }
// n must be odd at this point, so we can skip even i's(i+=2)
    for(i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            arr[j++] = i;
            n-=i;
        }
    }
// at this point if n is greater than 2, than n itself is a prime number
    if(n>2) arr[j++] = n;

    return j;
}
int main()
{
    sieve();
    int n, i, j, sum;

    cin>>n;

    int k = prime_factor(n);

    if(bs[arr[k-1]]==1){
        int j = k-1;
        sum = 0;
        for(i=0; sum<arr[k]; i++){
            sum+=primes[i];
            arr[j++]=primes[i];
        }
        if(sum==arr[k-1]){
            cout<<j<<endl;
            for(i=0; i<j; i++){
                printf("%d ", arr[i]);
            }
        }
        else{
            cout<<k<<endl;
            for(i=0; i<k; i++){
                printf("%d ", arr[i]);
            }
        }
    }
    else{
        cout<<k<<endl;
        for(i=0; i<k; i++){
            printf("%d ", arr[i]);
        }
    }
    cout<<endl;
    return 0;
}
