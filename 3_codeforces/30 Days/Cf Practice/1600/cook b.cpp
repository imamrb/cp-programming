#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
#define EPS              (double)1e-9
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL n, i, j, b, p, t;

    cin>>t;
    while(t--){

        cin>>n;
        LL b[n+1];
        double p[n+1];
        for(i=0; i<n; i++) cin>>b[i];
        for(i=0; i<n; i++) cin>>p[i];

        double tp = 0, ans = 0;
        LL cnt = 0, tb = 0;
        for(i=0; i<n; i++){
            if(p[i]>0.00000001){
                tb ^= b[i];

                tp += p[i];
                cout<<tp<<endl;
                cnt ++;
                double d;
                if(tp>1.0) d = ((double)(1.000000)/(double)cnt);
                else d = (tp/(double)cnt);
                cout<<d<<endl;
                ans += ((double)(tb)*d);
            }
        }
        cout<<setprecision(5)<<ans<<endl;
    }
    return 0;

}
