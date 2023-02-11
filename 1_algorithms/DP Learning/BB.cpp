#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)100
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int n, cnt;

int vis[MAX][MAX], moves[MAX][MAX], cell[MAX][MAX];

inline bool valid(int &row, int &col){
    return (row>=1 && row<=n && col>=1 && col<=n);
}
inline bool check(int &a, int &b){
    if(cell[a+1][b-1] && cell[a+1][b] && cell[a+1][b+1] && cell[a+2][b]){
        cell[a+1][b-1] = 0;
         cell[a+1][b]  = 0;
          cell[a+1][b+1] = 0;
         cell[a+2][b] = 0;
         cnt += 4;
         return true;
    }
    else return false;

}
int Bfs(int x, int y){
    if(valid(x, y) && check(x, y)) return true;
    else return false;
}
int main()
{
    IOS;
    int m, i, j;
    memset(cell, 0, sizeof(cell));
    cin>>n;
    string s;
    int one = 0;
    for(i=0; i<n; i++){
        cin>>s;
        for(j=0; j<n; j++){
            if(s[j]=='.') {
                    cell[i+1][j+1] = 1;
                    one ++;
            }
        }
    }
    cnt = 0;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(cell[i][j]==1){
                cnt++;
                cell[i][j] = 0;
                bool flag = Bfs(i, j);
                if(flag==false){cnt = -1; break;}
            }
        }
    }
    if(cnt==one) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
