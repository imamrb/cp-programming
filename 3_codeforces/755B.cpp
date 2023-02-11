#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i;
    string t;
    map<string, int> mp;

    cin>>n>>m;
    for(i=0; i<n+m; i++){
        cin>>t;
        mp[t]++;
    }
    int c = 0;
    for(auto p:mp){
        if(p.second>1) c++;
    }
    n-=c, m-=c;
    if(c%2==0){
            if(n>m)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    else{
        if(n>=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
