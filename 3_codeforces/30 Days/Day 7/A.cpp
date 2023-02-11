#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, i;
    string s;

    cin>>t;
    for(i=1; i<=t; i++){
        cin>>s;
        if(s[0]=='0' || s[0]=='-'){
            cout<<"Case "<<i<<": "<<s<<" is not a valid result"<<endl;
        }
        else  cout<<"Case "<<i<<": "<<s<<" is a valid result"<<endl;
    }
    return 0;
}
