#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 1005
#define valid(tx,ty) tx>=0 && tx<row && ty>=0 && ty<col
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
typedef vector <int> i;
i a;
a.push_back(2);
a.push_back(3);

a[1]
int fx[] = {1,-1,0,0};
int fy[] = {0,0,1,-1};

int row, col;
int dis[mx][mx], vis[mx][mx], cell[mx][mx];

int BFS(int x1, int y1, int x2, int y2){
    memset(dis, 0, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    queue<ii> Q;
    Q.push(ii(x1,y1));
    vis[x1][y1] = 1;
    while(!Q.empty()){
        ii u = Q.front(); Q.pop();
        for(int k=0; k<4; k++){
            int tx = u.first + fx[k];
            int ty = u.second + fy[k];
            if(valid(tx,ty) && cell[tx][ty]!=-1 && vis[tx][ty]==0){
                vis[tx][ty] = 1;
                dis[tx][ty] = dis[u.first][u.second] + 1;
                Q.push(ii(tx,ty));
            }
        }
    }
    return dis[x2][y2];
}
int main()
{
    int n, x, m, y, r1, c1, r2, c2;
    while(scanf("%d %d", &row, &col)){
        if(row==0 && col==0) break;
        cin>>n;
        memset(cell, 0, sizeof(cell));
        for(int i=0; i<n; i++){
            scanf("%d %d", &x, &m);
            for(int j=0; j<m; j++){
                scanf("%d", &y);
                cell[x][y] = -1;
            }
        }
        scanf("%d %d", &r1, &c1);
        scanf("%d %d", &r2, &c2);
        cout<<BFS(r1,c1,r2,c2)<<endl;
    }
    return 0;
}
