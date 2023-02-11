#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a;
ll n, s, k, i, p;

ll can(ll mid){
    vector<ll> d;
    ll total = 0, p;
    for(i=0; i<n; i++){
        p = a[i] + mid*(i+1);
        d.push_back(p);
    }
    sort(d.begin(), d.end());
    for(i=0; i<mid; i++) total += d[i];
    return total;
}
int main()
{
    cin>>n>>s;

    for(i=0; i<n; i++){
        scanf("%I64d", &k);
        a.push_back(k);
    }
    ll lo = 1, hi = n, ans=0, mid, q;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        ll cost = can(mid);
        if(cost<=s){
            lo = mid+1;
            q = mid;
            ans = cost;
        }
        else hi = mid - 1;
    }
    if(ans==0) cout<<0<<" "<<0<<endl;
    else cout<<q<<" "<<ans<<endl;

    return 0;
}
