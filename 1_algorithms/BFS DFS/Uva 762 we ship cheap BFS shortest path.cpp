#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 2000
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

vector<int> adj[mx];
int dst[mx];
vector<int> v;
bool BFS(int st, int en){
    queue<int> Q;
    int i, j;
    int path[mx]={-1};
    for(i=1; i<mx; i++) dst[i]=INF;

    Q.push(st);
    dst[st] = 0;
    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        int l = adj[u].size();
        for(i=0; i<l; i++){
            int v = adj[u][i];
            if(dst[v]==INF){
                dst[v] = dst[u] + 1;
                path[v] = u;
                Q.push(v);
            }
        }
    }
    if(dst[en]==INF) return false;
    else{
        int now = en;
        v.pb(now);
        while(now!=st){
            now = path[now];
            if(now<0) return false;
            v.pb(now);
        }
        return true;
    }
}

int main()
{
    int n, i;
    bool line = false;
    string fm, to;
    map<string, int> mp;
    map<int, string> my;
    while(scanf("%d", &n)!=EOF){
        int index = 0;
        for(i=0; i<mx; i++) adj[i].clear();
        for(i=0; i<n; i++){
            cin>>fm>>to;
            if(mp.find(fm)==mp.end()){
                mp[fm]=++index;
                my[index] = fm;
            }
            if(mp.find(to)==mp.end()){
                mp[to]=++index;
                my[index] = to;
            }
            adj[mp[fm]].pb(mp[to]);
            adj[mp[to]].pb(mp[fm]);
        }

        cin>>fm>>to;
        if(line) printf("\n");
        if(mp.find(fm)==mp.end() || mp.find(to)==mp.end())
            cout<<"No route"<<endl;
        else{
            int st = mp[fm];
            int en = mp[to];
            if(BFS(st, en)){
                int s = v.size();
                for(i=s-1; i>0; i--){
                    cout<<my[v[i]]<<" "<<my[v[i-1]]<<endl;
                }
            }
            else cout<<"No route"<<endl;
        }
        line = true;
        v.clear();
        mp.clear();
        my.clear();
    }
    return 0;
}
