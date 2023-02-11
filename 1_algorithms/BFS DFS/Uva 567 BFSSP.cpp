#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 100
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;

vector<int> adj[mx];
int path[mx], dst[mx];

int BFS(int st, int en){
    queue<int> Q;
    int i, j;
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
    /*If i want to print the path of st to en: */
//    int now = en;
//    cout<<"path: "<<now<<" ";
//    while(now!=st){
//        now = path[now];
//        cout<<now<<" ";
//    }
//    cout<<endl;

    return dst[en];
}

int main(){
    int i, j, x, f, t=1;

    while(scanf("%d",&x)==1){
        for(i=1; i<=20; i++) adj[i].clear();
        for(j=1; j<=x; j++){
            scanf("%d", &f);
            adj[1].push_back(f);
            adj[f].push_back(1);
        }
        for(i=2; i<=19; i++){
            scanf("%d", &x);
            for(j=1; j<=x; j++){
                scanf("%d", &f);
                adj[i].push_back(f);
                adj[f].push_back(i);
            }
        }
        int n, st, en;
        vector<iii> result;
        scanf("%d", &n);
        for(i=1; i<=n; i++){
            scanf("%d %d", &st, &en);
            result.push_back(make_tuple(st, en, BFS(st,en)));
        }
        printf("Test Set #%d\n", t++);
        for(auto &it: result){
            printf("%2d to %2d: %d\n", get<0>(it), get<1>(it), get<2>(it));
        }
        printf("\n");
        result.clear();
    }
    return 0;
}
