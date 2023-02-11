#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define mx             (int)1e5+7
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vi adj[mx], result;
bitset<mx> vis;

void dfs(int u){
    vis[u] = 1;
    for(auto v: adj[u]){
        if(vis[v]==0){
            result.pb(v);
            dfs(v);
        }
    }
}
int main()
{
    IOS;
    int i, j, n, e, a, b;
    cin>>n>>e; //7, 7
    for(i=0; i<e; i++){
        cin>>a>>b; //input (1,4), (4,3), (4, 6) (3,2), (2, 5), (2,7), (7,6)
        adj[a].pb(b);
        adj[b].pb(a);
    }
    result.pb(1);
    dfs(1);
    for(auto it: result) cout<<it<<" ";
    cout<<endl;

    if(result.size()==n) cout<<"Graph is Connected"<<endl;
    else cout<<"Graph is not connected"<<endl;

    return 0;
}
