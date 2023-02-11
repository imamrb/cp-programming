#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e3+7
#define INF 1000000000
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

vector<int> adj[MAX];
int depth[MAX];
bitset<MAX> bs, ok;
vector<int> v;
int cnt = 0;
bool BFS(int st, int en){
    queue<int> Q;
    int i, j;
    int path[MAX]={-1};
    for(i=1; i<MAX; i++) depth[i]=1;
    bs.reset();
    ok.reset();

    Q.push(st);
    bs[st] = 1;
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        int l = adj[u].size();
        for(i=0; i<l; i++){
            int v = adj[u][i];
            if(bs[v]==0){
                bs[v] = 1;
                path[v] = u;
                Q.push(v);
            }
        }
    }
    int now = en;
    ok[now] = 1;
    v.pb(now);
    while(now!=st){
        now = path[now];
        ok[now] = 1;
        v.pb(now);
    }
}
void DFS(int u){
    bs[u] = 1;
    for(auto v: adj[u]){
        if(bs[v]==0){
            DFS(v);
            if(ok[u]==0) depth[u]+=depth[v];
            else cnt += (depth[v]*adj[u].size());
        }
    }
}
int main()
{
    IOS;
    int t, n, q, i, j, a, b;

    cin>>t;
    while(t--){
        cin>>n>>q;
        for(i=1; i<n; i++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        for(i=0; i<q; i++){
            cin>>a>>b;
            BFS(a, b);
            bs.reset();
            cnt = 0;
            DFS(a);
            cout<<" print \n"<<" "<<cnt<<endl;
            for(auto it: v){
                cout<<it<<" "<<depth[it]<<endl;
            }
            v.clear();
        }
    }

}
