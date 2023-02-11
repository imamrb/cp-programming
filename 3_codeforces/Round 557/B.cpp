#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, m, i, j;

    cin>>n>>m;
    int one[n+1][m+1], two[n+1][m+1];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            cin>>one[i][j];
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            cin>>two[i][j];
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(one[i][j]>two[i][j]) swap(one[i][j], two[i][j]);
        }
    }
    bool flag = true;
    for(i=0; i<n; i++){
        for(j=1; j<m; j++){
            if(one[i][j-1]>=one[i][j]) flag = false;
            if(two[i][j-1]>=two[i][j]) flag = false;
        }
    }
    for(j=0; j<m; j++){
        for(i=1; i<n; i++){
            if(one[i-1][j]>=one[i][j]) flag = false;
            if(two[i-1][j]>=two[i][j]) flag = false;
        }
    }

    if(flag) cout<<"Possible"<<endl;
    else cout<<"Impossible"<<endl;



}
