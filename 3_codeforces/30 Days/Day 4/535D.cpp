#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    string s;
    string g = "BGR";

    int cnt = 0;
    cin>>n>>s;
    for(i=1; i<n-1; ){
        if(s[i]==s[i-1]){
            for(j=0; j<3; j++){
                if(s[i]!=g[j] && s[i+1]!=g[j]){
                    s[i] = g[j];
                    i+=2;
                    cnt++;
                    break;
                }
            }
        }
        else i++;
    }
    if(s[n-2]==s[n-1]){
        for(j=0; j<3; j++){
            if(s[n-2]!=g[j]){
                s[n-1] = g[j];
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    cout<<s<<endl;

    return 0;
}
