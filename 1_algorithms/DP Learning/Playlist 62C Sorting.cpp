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
    LL n, i, j, k, a, b;

    cin>>n>>k;
    vector<pill> v;

    for(i=0; i<n; i++){
        cin>>a>>b;
        v.pb({b, a});
    }
    sort(rall(v));
    multiset<LL> s;
    LL Max = 0, pl = 0;
    for(i=0; i<n; i++){
        pl += v[i].second;
        if(s.size()>k-1){
            auto it = s.begin();
            pl -= (*it);
            s.erase(it);
        }
        s.insert(v[i].second);
        Max = max(Max, pl*v[i].first);
    }

    cout<<Max<<endl;
}
