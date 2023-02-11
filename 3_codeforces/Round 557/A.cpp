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
     LL i, j, n, h, m, x, l, r;

    cin>>n>>h>>m;
    LL arr[n+10];

    for(i=1; i<=n; i++) arr[i] = h;

    for(i=1; i<=m; i++){
        cin>>l>>r>>x;
        for(j=l; j<=r; j++) arr[j] = min(x, arr[j]);
    }
    LL total = 0;
    for(i=1; i<=n; i++){
        total += (arr[i]*arr[i]);
    }

    cout<<total<<endl;

}
