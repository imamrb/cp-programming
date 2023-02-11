#include<bits/stdc++.h>
#define pb push_back
#define LL long long
using namespace std;
int main()
{
    LL n,t,g; cin>>n;

    vector<LL>v,table;


    for(LL i=1;i<=n;i++){
        LL x;
        cin>>x;
        if(i==1) continue;
        if(i==2) { g = x; continue; }

        g = __gcd(x,g);

    }

    v.pb(g);

    for(LL i=2;i<=n;i++){

        cin>>t;
        if(i==n) table.pb(t);
        g = t;

        for(LL j=2;j<=n;j++){
            LL x;
            cin>>x;
            if(i==n) table.pb(x);
            if(x==0) continue;
            g = __gcd(x,g);

        }
        v.pb(g);

    }


    for(int i=0;i<n-1;i++) cout<<table[i]/v[n-1]<<" ";
    cout<<v[n-1]<<endl;
}
