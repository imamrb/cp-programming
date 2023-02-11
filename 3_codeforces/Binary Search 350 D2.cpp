#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (long long)2e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

LL a[100007], b[100007];
LL n, k, i, j;

bool check(LL m){
    LL q = k;
    for(i=0; i<n; i++){
        if((m*a[i]- b[i])>0) q -= (m*a[i] - b[i]);
        if(q<0) return false;
    }
    return true;
}
int main()
{
    IOS;

    cin>>n>>k;
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];

    LL ans = 0, lo = 1 , mid, hi = MAX;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        if(check(mid)) {
                lo = mid + 1;
                ans = mid;
        }
        else hi = mid - 1;
    }
    cout<<ans<<endl;

    return 0;
}
