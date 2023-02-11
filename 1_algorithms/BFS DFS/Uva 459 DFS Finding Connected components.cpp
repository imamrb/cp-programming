#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 200

vector<int> adj[mx];
bitset<mx> vis;
int cnt;

int dfs(int u){
    vis[u] = 1;
    int l = adj[u].size();
    for(int i=0; i<l; i++){
        int v = adj[u][i];
        if(vis[v]==0){
            dfs(v);
            ++cnt;
        }
    }
    return cnt;
}
int main()
{
    int n, i;
    char ch;
    bool flag = false;

    cin>>n;

    while(n--){
        if(flag) cout<<endl;
        cin>>ch;
        for(i=65; i<97; i++) adj[i].clear();
        string s;
        cin.ignore();
        while(getline(cin, s) && s!=""){
            if(s[0]!=s[1]){
                adj[s[0]].pb(s[1]);
                adj[s[1]].pb(s[0]);
            }
        }
        int sub = 0;
        for(i=65; i<=ch; i++){
            cnt = 0;
            if(adj[i].size()==0) ++sub;
            else{
                int r = dfs(i);
                if(r>0) ++sub;
            }
        }
        printf("%d\n", sub);
        vis.reset();
        flag = true;
    }
    return 0;
}
