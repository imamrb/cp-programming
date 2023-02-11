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
    int i, j, n;
    string s, ans;
    cin>>n>>s;
    s = 'x'+s;

    vector<int> open, close;
    for(i=1; i<n; i++){
        if(s[i]=='(' && s[i+1]==')') {
                ans[i] = ans[i+1] = '0';
                ++i;
        }
        else {
            if(s[i]=='(') open.pb(i);
            else close.pb(i);
        }
    }
    if(s[n-1]!='(') close.pb(n);

    int sz = open.size();
    int bit = 1;
    for(i=0; i<sz; i++){
        ans[open[i]] = ans[close[i]] = bit + 48;
        bit = !bit;
    }
    for(i=1; i<=n; i++) cout<<ans[i]; cout<<endl;

    return 0;
}
