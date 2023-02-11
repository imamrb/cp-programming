#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
using namespace std;
typedef long long LL;

int main()
{
    IOS;

    long long t, n, a, i, j;

    cin>>t;

    while(t--){
        cin>>n;
        LL ans = 0;
        LL one[35] = {0}, zero[35] = {0};
        vector<LL> v;
        for(i=0; i<n; i++){
            cin>>a;
            v.pb(a);
            for(j=0; j<=30; j++){
                if(a&(1<<j)){
                    one[j]++;
                }
                else zero[j]++;
            }
        }
        for(j=0; j<=30; j++){
            if(one[j]>=zero[j]) ans |= (1<<j);
        }
        LL sum = 0;
        for(i=0; i<n; i++){
            sum += (v[i]^ans);
        }
        cout<<sum<<endl;
    }
    return 0;
}
