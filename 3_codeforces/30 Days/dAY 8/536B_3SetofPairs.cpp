#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
using namespace std;
typedef long long ll;
typedef vector<int> vi;

int main()
{
    IOS;
    ll n, m, i, j, t, d ;
    cin>>n>>m;
    vector<ll> dish(n+1), cost(n+1);
    typedef pair<ll, ll> pairs;
    set<pairs> st;

    for(i=1; i<=n; i++) {
        cin>>dish[i];
    }
    for(i=1; i<=n; i++){
        cin>>cost[i];
        st.insert(mkp(cost[i], i));
    }
    while(m--){
        cin>>t>>d;
        ll total = 0;
        while(d>0){
            if(dish[t]>=d){
                total += (cost[t]*d);
                dish[t] -= d ;
                if(dish[t]==0) st.erase({cost[t], t});
                d = 0;
            }
            else{
                d -= dish[t];
                total += (dish[t]*cost[t]);
                dish[t] = 0;
                st.erase({cost[t], t});
                if(st.size()==0) break;
                pairs x = *st.begin();
                t = x.second;
            }
        }
        if(d) cout<<0<<endl;
        else cout<<total<<endl;
    }
    return 0;
}
