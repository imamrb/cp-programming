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
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    int n, x, y, a, i;
    vi v;

    cin>>n>>x>>y;
    for(i=0; i<n; i++){
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    int ans = 0;
    if(x>y) ans = n;
    else{
        for(i=0; i<n; i+=2){
            if(max(0, v[i]-x)==0) ans++;
        }
    }
    cout<<ans<<endl;

    return 0;

}
