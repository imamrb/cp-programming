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
    int n, i, j, k;
    cin>>n;
    vector<int> v(n+10), fq(MAX, 0);
    for(i=0; i<n; i++){
        cin>>v[i];
        ++fq[v[i]];
    }
    int val = max_element(all(fq)) - fq.begin();
    int index = find(all(v), val) - v.begin();

     vector< pair<int, pi> > ans;
    for(i=index-1; i>=0; i--){
        if(v[i]<val){
            ans.pb({1, {i, i+1}});
        }
        else if(v[i]>val) ans.pb({2, {i, i+1}});
        v[i] = val;
    }

    for(i=index+1; i<n; i++){
        if(v[i]<val){
            ans.pb({1, {i, i-1}});
        }
        else if(v[i]>val) ans.pb({2, {i, i-1}});
        v[i] = val;
    }
    cout<<ans.size()<<endl;
    for(auto it: ans){
        cout<<it.first<<" "<<it.second.first+1<<" "<<it.second.second+1<<endl;
    }

    return 0;

}
