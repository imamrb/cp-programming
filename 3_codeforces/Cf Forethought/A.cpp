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
    string s;
    cin>>s;
    int i, a=0, cn = 0, d;

    int l = s.length();
    for(i=0; i<l; i++){
        if(s[i]=='a') a++;
        else cn++;
    }
    while(1){
        d = (a+cn)/2 + 1;
        if(a>=d) break;
        else cn--;
    }
    cout<<a+cn<<endl;
}
