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
    int n, i, j, k, a;

    set<int> st;
    vector<int> v;

    cin>>n>>k;

    for(i=0; i<n; i++){
        cin>>a;
        st.insert(a);
    }
    for(auto it: st){
        v.pb(it);
    }
    int l = v.size();
    int d = l - k ;
    if(d>0){
        int Min = MAX;
        for(i=0; i<(l-d); i++){
            Min = v[i+d]- v[i];
            li.pb(Min);
        }
        --d;
        cout<<Min<<endl;
        return 0;
    }
    cout<<0<<endl;

    return 0;

}
