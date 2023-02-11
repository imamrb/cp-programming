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
    int n, i, j, k;
    cin>>n;
    vector<int> v(n), fq(n+10, 0);

    for(i=0; i<n; i++){
        cin>>v[i];
        ++fq[v[i]];
    }
    int mx = *max_element(all(fq));
    if(mx>2) cout<<"NO"<<endl;
    else{
        sort(all(v));
        vector<int> in, dc;
        in.pb(v[0]);
        for(i=1; i<n; i++){
            if(v[i]==v[i-1]) dc.pb(v[i]);
            else in.pb(v[i]);
        }
        sort(rall(dc));
        cout<<in.size()<<endl;
        for(auto it: in) cout<<it<<" "; cout<<endl;
        cout<<dc.size()<<endl;
        for(auto it: dc) cout<<it<<" "; cout<<endl;
    }

}
