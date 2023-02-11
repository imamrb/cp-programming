#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
ll power = 0, A, B, n, k;

vector<ll> v;
ll mergesort(ll l, ll r){

    ll power, lo, hi, cnt, base, minPower;
    base = (r - l)+1;
    lo = lower_bound(v.begin(), v.end(), l) - v.begin();
    hi = upper_bound(v.begin(), v.end(), r) - v.begin();
    cnt = hi - lo;
    if(cnt==0) power = A;
    else power = B*cnt*base;

    if(l==r || cnt==0) return power;
    else{
        ll mid = (l+r)/2;
        minPower = min(power, mergesort(l, mid)+mergesort(mid+1, r));
    }
    return minPower;
}
int main()
{
    IOS;
    ll i, j, a, len, total;

    cin>>n>>k>>A>>B;
    for(i=0; i<k; i++){
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    len = (1<<n); //counts power of 2^n
//    cout<<len<<endl;
//    total = B*k*len;
    total = mergesort(1, len);
    cout<<total<<endl;

    return 0;
}
