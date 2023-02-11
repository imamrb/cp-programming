#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;

int main()
{
    IOS;
    int n, k, a, i, j, m, c;
    cin>>n>>k;
    vector<int> fq(5010, 0), color(n), ans(n);
    vector<pi> v;

    for(i=0; i<n; i++){
        cin>>a;
        v.pb(mkp(a, i));
        fq[a]++;
    }
    bool flag = true;
    sort(all(v));
    int Max = maximum(fq);
    if(Max>k) flag = false;

    c = 1;
    color[0] = c;
    for(i=1; i<n; i++){
        c++;
        if(c>k) c = 1;
        color[i] = c;
//        cout<<color[i]<<v[i].first<<" "<<color[i-1]<<v[i-1].first<<endl;
        if(color[i]==color[i-1] && v[i].first==v[i-1].first) flag = false;
    }
//    cout<<endl;
    if(flag==true){
        for(i=0; i<n; i++){
            int index = v[i].second;
            ans[index]=color[i];
        }
        cout<<"YES"<<endl;
        for(auto p: ans) cout<<p<<" ";
        cout<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
