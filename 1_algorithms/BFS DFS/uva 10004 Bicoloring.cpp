#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 200
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

vector<int> adj[mx];
int  dst[mx];
int BFS(int st, int en){
    queue<int> Q;
    int i, j, a;
    for(i=0; i<mx; i++) dst[i]=INF;

    Q.push(st);
    dst[st] = 0;
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        int l = adj[u].size();
        for(i=0; i<l; i++){
            int v = adj[u][i];
            if(dst[v]==INF){
                dst[v] = 1 - dst[u];
                Q.push(v);
            }
            else if(dst[u]==dst[v]) return false;
        }
    }
    return true;
}

int main(){
    int n, a, b, l, i;

    while(scanf("%d", &n) && n){
        scanf("%d", &l);
        for(i=0; i<n; i++) adj[i].clear();
        for(i=0; i<l; i++){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        if(BFS(a,b)) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}
