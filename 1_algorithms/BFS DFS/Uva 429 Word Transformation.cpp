#include<bits/stdc++.h>
using namespace std;
#define pb push_back
map<string, vector<string> > adj;
vector<string> vs;
map<string, int> vis;
int BFS(string st, string en){
    queue<string> Q;
    Q.push(st);
    vis[st] = 0;
    while(!Q.empty()){
        string u = Q.front(); Q.pop();
        if(u==en) break;
        int l = adj[u].size();
        for(int i=0; i<l; i++){
            if(vis[adj[u][i]]==0){
                vis[adj[u][i]] = vis[u] + 1;
                Q.push(adj[u][i]);
            }
        }
    }
    return vis[en];
}
bool is(string a, string b){
    int l1 = a.size(); int l2 = b.size();
    int cnt=0;
    if(l1==l2){
        for(int i=0; i<l1; i++){
            if(a[i]!=b[i]) ++cnt;
        }
        if(cnt==1) return true;
    }
    return false;
}
int main()
{
    int n, flag=0;
    string s, t;

    cin>>n;
    while(n--){
        while(cin>>s, s!="*"){
            int l = vs.size();
            for(int i=0; i<l; i++){
                if(is(vs[i], s)){
                    adj[vs[i]].pb(s);
                    adj[s].pb(vs[i]);
                }
            }
            vs.pb(s);
        }
        cin.ignore();
        string line;
        if(flag) cout<<endl; flag = 1;
        while (getline(cin, line) && line != ""){
            stringstream ss(line);
            ss >> s >> t;
            int steps = BFS(s, t);
            cout<<s<<" "<<t<<" "<<steps<<endl;
            vis.clear();
        }
        adj.clear();
    }
    return 0;
}
