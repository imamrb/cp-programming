#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
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
    int n, i, j, a;

    vector<int> v;

    cin>>n;

    for(i=0; i<n; i++){
        cin>>a;
        v.pb(a);
    }
    int Max = max_element(all(v)) - v.begin();

    bool flag = true;
    for(i=Max; i>0; i--){
        if(v[i]<v[i-1]) { flag = false; break; }
    }
    for(i=Max; i<n-1; i++){
        if(v[i]<v[i+1]) { flag = false; break; }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
