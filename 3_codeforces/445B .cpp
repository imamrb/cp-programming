#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 2000

vector<int> adj[mx];
bitset<mx> vis;
long long total=1;

int dfs(int u){
    vis[u] = 1;
    int l = adj[u].size();
    for(int i=0; i<l; i++){
        int v = adj[u][i];
        if(vis[v]==0){
            dfs(v);
            total*=2;
        }
    }
}
int main()
{
    int n, m, i, j, a, b;
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(i=1; i<=n; i++){
        dfs(i);
    }
    cout<<total<<endl;

    return 0;
}
