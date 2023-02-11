#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (long long)1e18+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;


LL n, d, Min, p1, p2;
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
            p1 = v[i-1].second;
            p2 = v[i].second;
//            double z = (double)(v[i-1].first + v[i].first);
//            c = (double)(z/(double)2);
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

        vector<pill> v1,v2,v3,point;

        for(i=0; i<n; i++){
            cin>>x>>y;
            point.pb({x, y});
            v1.pb({x-y, i});
            v2.pb({y-x, i});
            v3.pb({x+y, i});
        }
        sort(all(v1)); sort(all(v2)); sort(all(v3));
        double ans1=0, ans2=0, ans3=0, ans4=0, z;
        double x1, y1;
        Count(v1);
        if(d!=0){
            x1 = ((double)(point[p1].first + point[p2].first))/((double)2);
            y1 = ((double)(point[p1].second + point[p2].second))/((double)2);
            c = x1 - y1;
            z = (double)(point[p1].second - point[p1].first); //y-x + (x1-y1) = 0
            ans1 = fabs(z+c);
        }
        Count(v2);
        if(d!=0){
            x1 = ((double)(point[p1].first + point[p2].first))/((double)2);
            y1 = ((double)(point[p1].second + point[p2].second))/((double)2);
            c = y1 - x1;
            z = (double)(point[p1].first - point[p1].second); // x - y + (y1 - x1 ) = 0
            ans2 = fabs(z + c);
        }
        Count(v3);
        if(d!=0){
            x1 = ((double)(point[p1].first + point[p2].first))/((double)2);
            y1 = ((double)(point[p1].second + point[p2].second))/((double)2);
            c = y1 + x1;
            z = (double)(-point[p1].first - point[p1].second); // - x - y + (x1 + y1) = 0
            ans3 = fabs(z + c);
            z = (double)(point[p1].first + point[p1].second); //  x + y - (x1 + y1) = 0
            ans4 = fabs(z - c);
        }
        cout<<min(ans1, min(ans2, min(ans3, ans4)))<<endl;
    }
    return 0;

}
