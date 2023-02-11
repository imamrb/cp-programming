#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (long long)2e18+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;


LL n, d, Min, p1;
double c;

void Count(vector<pill> &v){
    Min = MAX;
    for(LL i=1; i<n; i++){
        d = abs(v[i-1].first - v[i].first);
        if(d==0){
           break;
        }
        if(d<=Min){
            Min = d;
            p1 = v[i].second;
            c = (double)(v[i-1].first + v[i].first)/2.0;
        }
    }
}
int main()
{
    IOS;
    LL t, x, y, i;

    cin>>t;

    while(t--){
        cin>>n;

        vector<pill> v, point, v2;

        for(i=0; i<n; i++){
            cin>>x>>y;
            point.pb({x, y});
            v.pb({x+y, i});
            v2.pb({x-y, i});
        }
        sort(all(v)); sort(all(v2));


        double ans1 = 0.0, ans2=0.0;

        Count(v);
        if(d!=0){
            ans1 = abs(point[p1].first + point[p1].second - c); //x+y - (x1+y1) = 0
        }

        Count(v2);
        if(d!=0){
            ans2 = abs(point[p1].second - point[p1].first + c); //y-x + (x1-y1) = 0
        }

        double ans = min(ans1, ans2);
        cout<<fixed<<setprecision(6)<<ans<<endl;
    }

}
