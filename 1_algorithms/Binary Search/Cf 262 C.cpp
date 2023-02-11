#include<bits/stdc++.h>
using namespace std;
#define maxn 100005
typedef long long ll;

ll n, m, w;
vector<ll> a(maxn), res(maxn);

bool can(ll x, ll rest)
{
    fill(res.begin(), res.end(), 0);

    for(ll i=1; i<=n; i++){
        res[i]+=res[i-1];
        ll need = x - a[i] - res[i];
        if(need>0){
            rest -= need;
            res[i]+=need;
            if(i+w<=n) res[i+w]-=need;
        }
        if(rest<0) return 0;
    }
    return 1;
}
int main()
{

    cin>>n>>m>>w;

    for(ll i=1; i<=n; i++) scanf("%d", &a[i]);

    ll lo = *min_element(a.begin(), a.end());
    ll hi = 1e15, ans;

    while(lo<=hi){
        ll mid = lo + (hi-lo)/2;
        if(can(mid, m)){
            lo = mid + 1;
            ans = mid;
        }
        else hi = mid - 1;
    }

    cout<<ans<<endl;

    return 0;

}
