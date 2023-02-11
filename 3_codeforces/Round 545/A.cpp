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
    int n, i, j, l, x, Max, r;

    cin>>n;
    vector<int> v(n+1), ans;

    for(i=0; i<n; i++) cin>>v[i];

    for(i=1; i<n; i++){
        l = 1;
        while(v[i-1]==v[i]){
            l++;
            i++;
            if(i==n) break;
        }
        ans.pb(l);
        if(i==n-1 && v[i-1]!=v[i]) ans.pb(1);
    }
    x = ans.size();
    Max = 0;
    for(i=0; i<x-1; i++){
        r = min(ans[i], ans[i+1]);
        Max = max(Max, r);
    }
    cout<<Max*2<<endl;

}
