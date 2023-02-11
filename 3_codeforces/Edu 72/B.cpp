#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
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
    int t, n, i, j, x, d, h;

    cin>>t;
    while(t--){
        cin>>n>>x;
        int maxd = 0, maxnet = 0;
        for(i=0; i<n; i++){
            cin>>d>>h;
            maxd = max(maxd, d);
            maxnet = max(maxnet, d-h);
        }
        x -= maxd;
        int ans;
        if(x<=0) ans = 1;
        else{
            if(maxnet>0){
                d = x/maxnet;
                if(x%maxnet) d++;
                ans = d+1;
            }
            else ans = -1;
        }
        cout<<ans<<endl;
    }



}
