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
    int n, i, j, len=0;
    string s, ans;
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++){
        ans += s[i];
        len++;
        if(len%2){
            while(i<n-1 && s[i]==s[i+1]) i++;
        }
    }
    if(len%2) --len;
    cout<<n-len<<endl;
    for(i=0; i<len; i++) cout<<ans[i];
    cout<<endl;
}
