#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define Mx 100000
typedef vector<int> vi;

vi num, low, parent, ap, adj[Mx];
int root, childs, cnt;

void allAPB(int u){
    num[u] = low[u] = cnt++; //iteration counter when vertex u is visited for the 1st time
    if(u==5) cout<<u<<" "<<num[u]<<" "<<low[u]<<endl;
    for(int i=0; i<(int)adj[u].size(); i++){
        int v = adj[u][i];
        if(num[v]==0 ){ // 0 means unvisited
            parent[v] = u;
            if(u==root) childs++; //special case if u is a root

            if(u==4) cout<<u<<" "<<v<<endl;
            allAPB(v);
//            if(v==5) printf("low[%d] = %d & low[%d] = %d\n", u, low[u], v, low[v]);

            low[u] = min(low[u], low[v]);

            if(low[v]>=num[u]) ap[u] = true;
            if(low[v]> num[u]) printf(" Edge (%d, %d) is a bridge low[%d] = %d & num[%d]=%d\n", u, v, v, low[v], u,  num[u]);
        }
        else if(v != parent[u]) // a back edge not a direct cycle
            low[u] = min(low[u], num[v]); //low[u]<vis[u] only when there is a cycle/back edge
    }
}
int main()
{
    int V, E, i, a, b;

    cin>>V>>E; //V is number of vertex from 0 and E is number of edges
    num.assign(V, 0); low.assign(V, 0);
    parent.assign(V, 0); ap.assign(V, 0);

    for(i=1; i<=E; i++){ //graph input
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    printf("Bridges: \n");
    cnt = 0;
    for(i=0; i<V; i++){
        if(num[i]==0){
            root = i; childs = 0;
            allAPB(i);
            ap[root] = (childs > 1); //a root is an ap if childs>1
        }
    }
    printf("Articulation Points: \n");
    for(i=0; i<V; i++){
        if(ap[i]) printf(" Vertex %d\n", i);
    }
}
