/*  Imam Hossain Santho
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

vector<LL> adj[MAX], w(MAX);
bitset<MAX> vis;

void dfs(LL u, LL x){
    vis[u] = 1;
    for(auto v: adj[u]){
        if(vis[v]==0){
            dfs(v, x);
            w[v] = max(w[v], -x);
            w[u] += w[v];
        }
    }
}
int main()
{
    IOS;
    LL i, j, t, n, u, v, x, k;

    cin>>t;
    while(t--){
        cin>>n>>x;
        for(i=1; i<=n; i++){
            cin>>w[i];
        }
        for(i=1; i<n; i++){
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1, x);
        w[1] = max(w[1], -x);
        cout<<w[1]<<endl;

        vis.reset();
        for(i=1; i<=n; i++) adj[i].clear();
    }
    return 0;
}
