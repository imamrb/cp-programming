#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL n, m, i, j, k, a, f;

    cin>>n>>m;
    LL gc;
    cin>>f;
    cin>>k;
    gc = k - f;
    for(i=2; i<n; i++){
        cin>>a;
        LL  d = a - k;
        gc = __gcd(gc, d);
        k = a;
    }
    LL ans = 0;
    for(i=0; i<m; i++){
        cin>>a;
        if(gc%a==0){
            ans = i+1;
        }
    }
    if(ans) {
            cout<<"YES"<<endl;
            cout<<f<<" "<<ans<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;

}
