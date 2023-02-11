#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, i,j;
    string s;

    cin>>n>>a>>b;
    cin>>s;

    if(s[a-1]==s[b-1]) cout<<0<<endl;
    else{
        if(a>b){
            i = a-1;
            while(s[i]==s[i-1]) --i;
            for(j=i; j>=b-1; j--){
                if(s[j]==s[b-1]) {cout<<(i-j)<<endl; break;}
            }
        }
        else{
            i = a-1;
            while(s[i]==s[i+1]) ++i;
            for(j=i; j<=b-1; j++){
                if(s[j]==s[b-1]) {cout<<(j-i)<<endl; break;}
            }
        }
    }

    return 0;
}
