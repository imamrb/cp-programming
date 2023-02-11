#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long LL;
int main()
{
    IOS;
    LL l, r, t, g;
    cin>>t;
    while(t--){
        LL cnt = 0;
        cin>>l>>r>>g;
        cnt = (r/g) - ((l-1)/g);
        if(cnt<=0) cout<<0<<endl;
        else if(cnt==1){
            if(g>=l && g<=r) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else cout<<cnt<<endl;
    }
    return 0;
}
