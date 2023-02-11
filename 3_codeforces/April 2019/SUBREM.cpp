#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (long long)1e5+7
#define INF             (long long)1e18+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;

vector<LL> adj[MAX], result(MAX, INF);
vector<LL> w(MAX, 0);
bitset<MAX> vis, record;

void dfs(LL u){
    vis[u] = 1;
    result[u] = w[u];
    for(auto v: adj[u]){
        if(vis[v]==0 && record[v]==0){
            dfs(v);
            result[u] += result[v];
        }
    }
}
int main()
{
    IOS;
    LL i, j, t, n, x, u, v, a, total;

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
//        for(i=1; i<=n; i++) cout<<result[i]<<" "; cout<<endl;
        for(i=1; i<=n; i++){
            LL index = min_element(all(result)) - result.begin();
            LL value = result[index];
            if((x+value)<0){
                if(index==1) {result[1] = 0; i++; break; }
                fill(all(result), INF);
                vis.reset();
                record[index] = 1;
                dfs(1);
            }
            else break;
        }
        --i;
        total = result[1] - (x*i);
        cout<<total<<endl;

        fill(all(result), INF);
        w.clear();
        vis.reset();
        record.reset();
        for(i=1; i<=n; i++) adj[i].clear();
    }
    return 0;
}
