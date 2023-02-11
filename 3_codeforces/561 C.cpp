#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int i, j, k, n, a;

    cin>>n;
    vector<int> v;
    for(i=0; i<n; i++){
        cin>>a;
        if(a<0) {
          v.pb(-a);
        }
        else if(a>0) v.pb(a);
    }
    sort(all(v));
    n = v.size();
    int cnt = 0;
//    for(auto p: v) cout<<p<<" "; cout<<endl;
    for(i=0; i<n; i++){
        a = (v[i]*2);
        int q = upper_bound(v.begin(), v.end(), a) - v.begin();
        cnt += (q - i -1);
    }
    cout<<cnt<<endl;

    return 0;
}
