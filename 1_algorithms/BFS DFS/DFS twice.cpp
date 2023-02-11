#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 100
typedef long long ll;
typedef pair<int,int> ii;
vector<int> adj[mx];
bitset<mx> vis, record[mx], yup;
int n, flag, x;

void dfs(int u){
    vis[u] = 1;
    int l = adj[u].size();
    record[0][u] = 1;
    yup[u] = 1;
    for(int i=0; i<l; i++){
        int v = adj[u][i];
        if(vis[v]==0){
            dfs(v);
        }
    }
}
void dfs2(int u, int p){
    vis[u] = 1;
    int l = adj[u].size();
    if(u==p) l = 0;
    else record[p][u] = 1;
    for(int i=0; i<l; i++){
        int v = adj[u][i];
        if(vis[v]==0){
            dfs2(v, p);
        }
    }
}
void print(int k){
    putchar('+');
    for(int j=0; j<x; j++){
        putchar('-');
    }
    printf("+\n");
    putchar('|');
    for(int j=0; j<n; j++){
        if(record[k][j]==flag && yup[j]==1)
            printf("Y|");
        else printf("N|");
    }
    putchar('\n');
    record[k].reset();
    vis.reset();
}
int main()
{
    int T, i, j, m;

    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>n;
        for(i=0; i<n; i++) adj[i].clear();
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%d", &m);
                if(m==1) adj[i].pb(j);
            }
        }
        flag = 1;
        x = n*2 - 1;
        printf("Case %d:\n", t);
        dfs(0);
        print(0);
        flag = 0;
        for(i=1; i<n; i++){
            dfs2(0, i);
            print(i);
        }
        putchar('+');
        for(int j=0; j<x; j++){
            putchar('-');
        }
        printf("+\n");
        yup.reset();
    }
    return 0;
}
