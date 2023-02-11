#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define Mx 10000
#define UNVISITED 0
#define VISITED 1
#define EXPLORED 2

typedef vector<int> vi;


vi vis, parent, adj[Mx];

void graphCheck(int u){
    vis[u] = EXPLORED;
    for(int i=0; i<(int)adj[u].size(); i++){
        int v = adj[u][i];
        if(vis[v]==UNVISITED){
            parent[v] = u;
            graphCheck(v);
        }
        else if(vis[v]==EXPLORED){
            if(v==parent[u])
                printf("Two ways (%d, %d)-(%d, %d)\n", u, v, v, u);
            else
                printf(" Back edge (%d, %d) (cycle)\n", u, v);
        }
        else if(vis[v]==VISITED)
            printf(" Forward/Cross Edge (%d, %d)\n", u, v);
    }
    vis[u] = VISITED;
    cout<<"visited hoise"<<u<<endl;
}
int main()
{

    int i, j,E, a, b, V;
    cin>>V>>E; //V is number of nodes & E is number of edges
    vis.assign(V, UNVISITED);
    parent.assign(V, 0);
    for(i=0; i<E; i++){
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    int index = 0;
    for(i=0; i<V; i++){
        if(vis[i]== UNVISITED) printf("Component %d:\n", ++index), graphCheck(i);
    }
}
