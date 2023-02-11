#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)20
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int vis[MAX][MAX], moves[MAX][MAX];

inline bool valid(int &row, int &col){
    return (row>=1 && row<=8 && col>=1 && col<=8);
}
int BFS(int x, int y, int mov){
    memset(vis, 0, sizeof(vis));
    memset(moves, 0, sizeof(moves));
    queue<pi> Q;

    Q.push({x, y});
    vis[x][y] = 1;
    int visited = 1;
    while(!Q.empty()){
        pi u = Q.front(); Q.pop();
        for(int k=0; k<8; k++){
            int tx = u.first + fx[k];
            int ty = u.second + fy[k];
            if(valid(tx,ty) && vis[tx][ty]==0){
                vis[tx][ty] = 1;
                Q.push({tx, ty});
                moves[tx][ty] = moves[u.first][u.second] + 1;
                if(moves[tx][ty]<=mov) visited++;
            }
        }
    }
    return visited;
}
int main()
{
    IOS;
    int n, t, r, c, k;

    cin>>t;
    while(t--){
        cin>>r>>c>>k;
        int ans = BFS(r, c, k);
        cout<<ans<<endl;
    }
    return 0;
}
