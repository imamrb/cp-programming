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

int parent[MAX][2], siz[MAX][2];

int Find(int x, int r){
    if(parent[x][r]==x) return x;
    else return parent[x][r] = Find(parent[x][r], r);
}
void Union(int x, int y, int r){
    int p = Find(x, r);
    int c = Find(y, r);
    if(siz[c][r]>siz[p][r]) swap(p, c);
    parent[c][r] = p;
    siz[p][r] += siz[c][r];
}
int main()
{
    IOS;
    int n, i, j, x, y, r;
    cin>>n;
    for(i=1; i<=n; i++){
        parent[i][0] = parent[i][1] = i;
        siz[i][0] = siz[i][1] = 1;
    }
    for(i=1; i<n; i++){
        cin>>x>>y>>r;
        Union(x, y, r);
    }
    LL ans = 0;
    for(i=1; i<=n; i++){
        if(parent[i][0]==i)
            ans += siz[i][0]*1LL*(siz[i][0]-1);
        if(parent[i][1]==i)
            ans += siz[i][1]*1LL*(siz[i][1]-1);
        ans += (siz[Find(i, 0)][0]-1) * 1LL * (siz[Find(i, 1)][1]-1);
    }

    cout<<ans<<endl;
}
