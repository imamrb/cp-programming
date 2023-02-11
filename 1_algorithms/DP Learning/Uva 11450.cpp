#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int price[25][25];
int M, C;
int memo[210][25];

int shop(int money, int g){
    if(money<0) return -100000000;
    if(g==C) return M - money;
    if(memo[money][g] != -1) {
//            cout<<"g = "<<g<<" money= "<<money<<endl;
            return memo[money][g];
    }
    int ans = -1;
    for(int model=1; model<=price[g][0]; model++){
        ans = max(ans, shop(money-price[g][model], g+1));
    }
    return memo[money][g]=ans;
}
int main()
{
    IOS;
    int i, j, T, score;
    cin>>T;

    while(T--){
        cin>>M>>C;
        for(i=0; i<C; i++){
            cin>>price[i][0];
            for(j=1; j<=price[i][0]; j++) cin>>price[i][j];
        }
        memset(memo, -1, sizeof(memo));

        score = shop(M, 0);
        if(score<0) cout<<"no solution"<<endl;
        else cout<<score<<endl;
    }
    return 0;
}
