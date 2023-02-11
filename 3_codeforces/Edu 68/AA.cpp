#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j, t, a;

    cin>>t;

    while(t--){
        cin>>n;
        vector<int> v;
        for(i=0; i<n; i++){
            cin>>a;
            v.pb(a);
        }
        sort(rall(v));
        int Min = min(v[0], v[1]);
        int ans = Min - 1;
        ans = min(ans, n-2);

        cout<<ans<<endl;
    }

    return 0;
}
