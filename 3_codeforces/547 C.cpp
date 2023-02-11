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
    int i, j, n;
    cin>>n;
    vector<int> v(n), ans(n+10);

    bitset<MAX> bs;
    int minu = 0;
    for(i=0; i<n-1; i++){
        cin>>v[i];
        if(v[i]<0) minu+=v[i];
    }
    if(v[0]>0) ans[0] = 1;
    else ans[0] = 1- minu;
    bs[ans[0]] = 1;
    for(i=0; i<n; i++){
        ans[i+1] = ans[i] + v[i];
        if(ans[i+1]>0) bs[ans[i+1]] = 1;
    }
    bool flag = true;
    for(i=1; i<=n; i++){
        if(!bs[i]){flag = false; break; }
    }
    if(!flag) cout<<"-1"<<endl;
    else {
            for(i=0; i<n; i++) cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;

}
