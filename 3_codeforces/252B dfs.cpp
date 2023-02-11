#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 500
#define valid(tx,ty) tx>0 && tx<=row && ty>0 && ty<=col && ((abs(u.first-tx) + abs(u.second-ty)) == 1)

typedef long long ll;
typedef pair<int, int> ii;

int fx[] = {0,1,-1,0};
int fy[] = {1,0,0,-1};
int row, col;
int vis[mx][mx], cell[mx][mx];
vector<ii> v;

int BFS(int x1, int y1){
    memset(vis, 0, sizeof(vis));
    queue<ii> Q;
    Q.push(ii(x1,y1));
    vis[x1][y1] = 1;
    v.pb(ii(x1,y1));
    while(!Q.empty()){
        ii u = Q.front(); Q.pop();
        for(int k=0; k<4; k++){
            int tx = u.first + fx[k];
            int ty = u.second + fy[k];
            if(valid(tx,ty) && vis[tx][ty]==0){
                vis[tx][ty] = 1;
                Q.push(ii(tx,ty));
                v.pb(ii(tx, ty));
                break;
            }
        }
    }
}

int main()
{
    int k, i, j, cnt = 0, tmp = 0;

    cin>>row>>col>>k;
    BFS(1, 1);
    int l = v.size();
    int d = l/k;
    if(d*k!=l) tmp = (l - d*k);

    for(i=0; i<l; i++){
        if(cnt==0) printf("%d ", d+tmp);
        printf("%d %d ", v[i].first, v[i].second);
        cnt++;
        if(cnt==d+tmp) { printf("\n"); tmp = 0; cnt = 0; }
    }
    return 0;
}
