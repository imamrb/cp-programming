#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL t, n, i, d, l, index, j;

    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        vector<pair<char, int> > v;

        string s = to_string(n);
        string p = to_string(d);
        string k;
        l = s.length();
        for(i=0; i<l; i++){
            v.pb({s[i], i});
        }
        sort(all(v));

        int Max = 0;
        for(i=0; i<l; i++){
            if(v[i].second>=Max){
                if(v[i].first>=p[0]){
                    break;
                }
                else {
                    k += v[i].first;
                    Max = max(Max, v[i].second);
                }
            }
        }
        int sz = k.length();
        if(sz!=0) cout<<k;
        for(j=sz; j<l; j++) cout<<d;
        cout<<endl;
    }
    return 0;
}
