#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, c,d , ans, j, k;

    cin>>n>>k;

    c = 0;
    d = n/2;
    for(i=1; i<=d && i<=1000000000; i++){
        if(n%i==0) c++;
        if(c==k){ ans = i; break;}
    }
    if(c==k) cout<<ans<<endl;
    else cout<<"-1"<<endl;

    return 0;
}

