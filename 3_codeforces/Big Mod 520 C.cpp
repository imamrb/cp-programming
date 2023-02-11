#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))

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
    LL n, q, i, l, r, d, ans, rem;
    string s;

    cin>>n>>q;
    LL cum[n+10], a[n+10];
    cum[0] = 0;
    cin>>s;
    for(i=1; i<=n; i++){
        LL value = s[i-1] - 48;
        cum[i] = cum[i-1] + value;
    }
    while(q--){
        ans = 0, rem = 0;
        cin>>l>>r;
        LL  one = cum[r] - cum[l];
        if(s[l-1]=='1' && s[r-1]=='1') one++;
        LL zero = r- l + 1 - one;

        d = bigmod(2, one, mod);
        ans = (d-1);
        if(zero)  {
                d = bigmod(2, zero, mod);
                rem = (ans*(d-1))%mod;
                if(zero>1) rem/=(ans-1);
        }
        ans = (ans+rem)%mod;

        cout<<ans<<endl;
    }
    return 0;
}
