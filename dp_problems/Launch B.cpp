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
    LL t, n, i, j, a, m;

    cin>>t;

    while(t--){
        cin>>m;
        vector<LL> ans;
        double mm = double(m);
        for(a=m+1; ;a++){
            if((a-m)>m) break;
            double aa = double(a);
            double d = (aa*mm/(aa-mm));

            double intpart;
            if(modf(d, &intpart) == 0.0) ans.pb(a);
        }
        cout<<ans.size()<<endl;
        for(auto it: ans) cout<<it<<endl;
    }
    return 0;

}
