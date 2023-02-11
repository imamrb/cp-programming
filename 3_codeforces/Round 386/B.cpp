#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    int i, m, n;

    cin>>n>>s;
    int l = n;
    for(i=0; i<l; ++i){
        if((l-i)%2) t+=s[i];
        else t=s[i]+t;
    }
    cout<<t<<endl;

    return 0;
}
