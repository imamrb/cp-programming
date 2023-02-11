#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (long long)1e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

const LL mod = (LL)1e9+7;
LL bigmod(LL base, LL pow , LL mod){
    if(pow==0) return 1;
    if(pow%2==0){
        LL tmp = bigmod(base, pow/2, mod);
        return ((tmp%mod) * (tmp%mod)) % mod;
    }
    else {
         return ( (base%mod)*bigmod(base, pow-1, mod) ) % mod;
    }
}
int main()
{
    IOS;
    LL t, n, m, i, ans, d;

    cin>>t;
    for(i=1; i<=t; i++){
        cin>>m>>n;
        ans = (bigmod(m, n, mod) - bigmod(m, n-1, mod) + mod)% mod;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
