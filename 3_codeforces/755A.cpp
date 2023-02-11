#include<bits/stdc++.h>
using namespace std;

#define sieve_size 1000010 //size of sieve,work upto 10^7
typedef long long ll;
typedef vector<int> vi;

ll Size;
bitset<sieve_size> bs;

void sieve()
{
    bs.set(); //set all bits to 1;
    bs[0] = bs[1] = 0;
    for(ll i=1; i<=sieve_size; i++){
        if(bs[i]){
            for(ll j=i*i; j<=sieve_size; j+=i){
                bs[j] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    int n, m;

    cin>>n;
    for(int i=1; i<=1000; i++){
        if(bs[i*n+1]==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
