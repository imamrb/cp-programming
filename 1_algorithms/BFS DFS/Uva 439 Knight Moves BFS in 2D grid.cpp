#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define INF 1000000000
#define mx 10
#define valid(tx,ty) tx>=1 && tx<=row && ty>=1 && ty<=col
typedef long long ll;
typedef pair<int, int> ii;
typedef tuple<int, int, int> iii;
int fx[] = {-2,-2,+2,+2,-1,+1,-1,+1};
int fy[] = {-1,+1,-1,+1,-2,-2,+2,+2};
int row = 8, col = 8;

int dis[mx][mx], vis[mx][mx];
int BFS(int x1, int y1, int x2, int y2){
    memset(dis, 0, sizeof(dis));
    memset(vis, 0, sizeof(vis));
    queue<ii> Q;
    Q.push(ii(x1,y1));
    vis[x1][y1] = 1;
    bool found = false;
    while(!Q.empty()){
        ii u = Q.front(); Q.pop();
        for(int k=0; k<8; k++){
            int tx = u.first + fx[k];
            int ty = u.second + fy[k];
            if(valid(tx,ty) && vis[tx][ty]==0){
                vis[tx][ty] = 1;
                dis[tx][ty] = dis[u.first][u.second] + 1;
                Q.push(ii(tx,ty));
                if(tx==x2 && ty==y2) found = true;
            }
        }
        if(found) break;
    }
    return dis[x2][y2];
}
int main(){
    string ch = "abcdefgh", s1, s2;
    int r1, c1, r2, c2;

    while(cin>>s1>>s2){
        r1 = s1[1] - 48;
        c1 = ch.find(s1[0]) + 1;
        r2 = s2[1] - 48;
        c2 = ch.find(s2[0]) + 1;
        int moves = BFS(r1,c1,r2,c2);
        printf("To get from %s to %s takes %d knight moves.\n", s1.c_str(), s2.c_str(), moves);
    }
    return 0;
}
