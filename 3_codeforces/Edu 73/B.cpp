#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             101

using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int fx[]={-2, -2, 2, 2, -1, -1, 1 , 1};
int fy[]={-1, 1, -1, 1, -2, 2, -2, 2};

int vis[MAX][MAX];
int n, cnt = 0;
inline bool valid(int &row, int &col){
    return (row>=1 && row<=n && col>=1 && col<=n);
}
void  BFS(int x, int y){

    if(vis[x][y] == 0){
        vis[x][y] = -1;
    };
    for(int k=0; k<8; k++){
        int tx = x + fx[k];
        int ty = y + fy[k];
        if(valid(tx,ty) && vis[tx][ty]==0){
            if(vis[x][y]==1) vis[tx][ty] = -1;
            else vis[tx][ty] = 1;
        }
    }
}
int main()
{
    IOS;

    cin>>n;
    memset(vis, 0, sizeof(vis));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            BFS(i, j);
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(vis[i][j]==-1) cout<<'W';
            else cout<<'B';
        }
        cout<<endl;
    }

    return 0;


}
