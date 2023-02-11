/* Imam Hossain Santho
    Noakhali Science & Technology University
*/
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

vector<LL> adj[MAX], v(MAX), m(MAX);
vector<pill> ans;
bitset<MAX> vis;

void dfs(LL u){
    vis[u] = 1;
    for(auto node: adj[u]){
        if(vis[node]==0){
            v[node] = __gcd(v[u], v[node]);
            dfs(node);
        }
    }
    if(adj[u].size()==1 && u>1){
         LL xyz = __gcd(m[u], v[u]);
         ans.pb({u, (m[u]-xyz)});
    }
}
int main()
{
    IOS;
    LL t, n, x, y, i, j, a;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<n; i++){
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(i=1; i<=n; i++){ cin>>a; v[i] = a;}
        for(i=1; i<=n; i++){ cin>>a; m[i] = a;}
        dfs(1);
        sort(all(ans));
        for(auto it: ans) cout<<it.second<<" "; cout<<endl;

        vis.reset();
        for(i=1; i<=n; i++) adj[i].clear();
        ans.clear();
    }
    return 0;
}
