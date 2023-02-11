#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long l, r, d, q;

    cin>>q;
    while(q--){
        cin>>l>>r>>d;
        if(d<l) cout<<d<<endl;
        else cout<< ((r/d)+1)*d<<endl;
    }

    return 0;
}
