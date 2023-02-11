#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, q, m, i, j;

    cin>>q;


    while(q--){
        cin>>n>>m;
        int cnt  = 0, ans;
        vector<string> v;
        vector<int> rvalue, cvalue;
        string x;
        for(i=0; i<n; i++){
            cin>>x;
            cnt = 0;
            for(j=0; j<m; j++){
                if(x[j]=='*') cnt++;
            }
            v.pb(x);
            rvalue.pb(cnt);
        }
        for(j=0; j<m; j++){
            cnt = 0;
            for(i=0; i<n; i++){
                if(v[i][j]=='*') cnt++;
            }
            cvalue.pb(cnt);
        }
        int Min = MAX;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                cnt = (rvalue[i]+cvalue[j]);
                if(v[i][j]=='.') cnt++;
                ans = (n+m) - cnt;
                Min = min(ans, Min);
            }
        }

        cout<<Min<<endl;
    }

    return 0;

}
