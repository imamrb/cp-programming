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
    int n,m, r, i, j, a;

    cin>>n>>m>>r;
    int Min = 2000, Sell = 0;

    for(i=0; i<n; i++){
        cin>>a;
        Min = min(Min, a);
    }
    for(i=0; i<m; i++){
        cin>>a;
        Sell = max(Sell, a);
    }
    int d = r/Min;
    int R = r - (d*Min);
    int Max = R + (Sell*d);

    if(Max>r) cout<<Max<<endl;
    else cout<<r<<endl;



}
