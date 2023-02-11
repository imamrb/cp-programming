#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
typedef long long ll;
typedef vector<int> vi;
const double pi=acos(-1);

int main()
{
    IOS;
    ll n, m, i, t, d, k;

    cin>>n>>m;
    vector<ll> dish(n+1), cost(n+1);
    vector< pair<ll, ll> > vc(n+1);

    for(i=1; i<=n; i++){
        cin>>dish[i];
    }
    for(i=1; i<=n; i++){
        cin>>cost[i];
        vc[i] = make_pair(cost[i], i);
    }
    sort(vc.begin()+1, vc.end());

    k = 1;
    while(m--){
        cin>>t>>d;
        ll total = 0;
        if(dish[t]>=d) {
            total += (cost[t]*d);
            dish[t] -= d ;
            d = 0;
        }
        else {
            d -= dish[t];
            total += (dish[t]*cost[t]);
            dish[t] = 0;
            for(i=k; i<=n; i++){
               if(d) {
                   ll food = vc[i].second;
                   if(dish[food]>=d){
                       total += (d*cost[food]);
                       dish[food] -= d;
                       d = 0;
                       break;
                   }
                   else{
                      d -= dish[food];
                      total += (cost[food]*dish[food]);
                      dish[food] = 0;
                      k = i + 1;
                   }
               }
            }
            if(d) total = 0;
        }
        cout<<total<<endl;
    }
    return 0;
}
