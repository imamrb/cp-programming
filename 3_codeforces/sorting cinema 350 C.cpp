#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    int n, i, j, m, a;
    map<int, int> mymap;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>a;
        mymap[a]++;
    }
    cin>>m;
    pi arr[m+1];
    for(i=0; i<m; i++) cin>>arr[i].first;
    for(i=0; i<m; i++) cin>>arr[i].second;

    set< pair<pi, int> > s;
    for(i=0; i<m; i++){
        int full = mymap[arr[i].first];
        int almost = mymap[arr[i].second];
        s.insert({{full, almost}, i+1});
    }

    auto it = s.end();
    --it;
    cout<<it->second<<endl;

    return 0;
}
