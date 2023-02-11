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

vi adj[mx];
bitset<mx> vis;
priority_queue<int, vector<int>, greater<int> > pq;

void dfs(int u){
    vis[u] = 1;
    pq.push(u);
    while(!pq.empty()){
        int v = pq.top();
        cout<<v<<" ";
        pq.pop();
        vis[v] = 1;
        for(auto p: adj[v]){
            if(vis[p]==0){
                pq.push(p);
                vis[p] = 1;
            }
        }
    }
    cout<<endl;
}
int main()
{
    IOS;
    int n, m, i, a, b;
    vis.reset();
    cin>>n>>m;
    for(i=0; i<m; i++){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    dfs(1);

    return 0;
}
