#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n, l=0, d= 0, u =0, r = 0, i, j;

    cin>>n>>s;

    for(i=0; i<n; i++){
        if(s[i]=='L') l++;
        else if(s[i]=='U') u++;
        else if(s[i]=='R') r++;
        else d++;
    }
    int a = min(l,r);
    int b = min(u, d);

    cout<<a*2+b*2<<endl;

    return 0;
}
