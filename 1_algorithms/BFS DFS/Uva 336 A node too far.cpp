#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 10010
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

vector<int> adj[mx];
int dst[mx];
int BFS(int st, int tt){
    queue<int> Q;
    int i, j, a;
    for(i=0; i<mx; i++) dst[i]=INF;

    Q.push(st);
    dst[st] = 0;
    int total = 0;
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        int l = adj[u].size();
        for(i=0; i<l; i++){
            int v = adj[u][i];
            if(dst[v]==INF){
                dst[v] = dst[u]+1;
                Q.push(v);
                if(dst[v]<=tt) ++total;
            }
        }
    }
    return total;
}

int main(){
    int t=1, n, a, b, q, i;
    set<int> s;
    while(cin>>n && n){
        for(i=0; i<mx; i++) adj[i].clear();
        for(i=0; i<n; i++){
            cin>>a>>b;
            s.insert(a);
            s.insert(b);
            adj[a].pb(b);
            adj[b].pb(a);
        }
        while(scanf("%d %d", &a, &b)){
            if(a==0 && b==0) break;
            if(b==0) q = s.size() - 1;
            else {
                    q = BFS(a, b);
                    q = (s.size() - q - 1);
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", t++, q, a, b);
        }
        s.clear();
    }
    return 0;
}
