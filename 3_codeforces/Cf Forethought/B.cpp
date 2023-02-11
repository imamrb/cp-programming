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
    int i, j, l, la, ll;
    string s;

    cin>>s;
    ll = s.length();
    bool flag = true;

    string in, ans;
    for(i=0; i<ll; i++){
        if(s[i]!='a') in+=s[i];
        else la = i;
    }
    l = in.length();
    int mid = l/2;
    if(l%2!=0) flag = false;
    for(i=0; i<mid; i++){
        if(in[i]!=in[i+mid]){
            flag = false;
            break;
        }
    }
    if(flag){
        if(l==0) ans = s;
        else if(l==ll) ans = s.substr(0, mid);
        else{
            int k = 0;
            for(i=0; i<ll; i++){
                if(s[i]!='a') k++;
                if(k>mid) break;
                ans+=s[i];
            }
            if(i<la) flag = false;
        }
    }
    if(flag) cout<<ans<<endl;
    else cout<<":("<<endl;

    return 0;
}
