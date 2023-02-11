#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
#define INF             (long long)1e18+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

vector<int> adj[MAX];
LL w[MAX], Min;
int parent[MAX], ix;
bitset<MAX> vis, del;

void dfs(int u){
    vis[u] = 1;
    for(auto v: adj[u]){
        if(vis[v]==0){
            parent[v] = u;
            dfs(v);
            w[u] += w[v];
        }
    }
}
void findNode(int u){
    vis[u] = 1;
    if(del[u]==0){
        for(auto v: adj[u]){
            if(vis[v]==0 && del[v]==0){
                if(w[v]<=Min){
                    Min = w[v];
                    ix = v;
                }
                findNode(v);
            }
        }
    }
}
void update(int index, LL val){
    int p = parent[index];
    w[p] -= val;
    if(p==1) return;
    else update(p, val);
}
int main()
{
    IOS;
    int i, j, t, n, u, v;

    LL val, total, x, k;

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
        dfs(1);
        k = 0;
//        for(i=1; i<=n; i++){
//            cout<<i<<" "<<parent[i]<<" "<<w[i]<<endl;
//        }
        while(1){
            vis.reset();
            Min = w[1];
            ix = 1;
            findNode(1); //find index
            val = w[ix];
//            cout<<ix<<" "<<val<<endl;
            if(x+val<=0){
                del[ix] = 1;
                ++k;
                if(ix==1) {w[1] = 0; break; }
                update(ix, val);
            }
            else break;
        }
        total = w[1] - (x*k);
        cout<<total<<endl;

        for(i=1; i<=n; i++) adj[i].clear();
        vis.reset();
        del.reset();
    }
    return 0;

}
