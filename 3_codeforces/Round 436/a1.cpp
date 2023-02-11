#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    int l = s.length();
    int cnt = 0;
    int check = 0;

        for(int i=0; i<l;i++){
            if(s[i]=='1') { cnt+=(l-i-1); if(cnt>=15 || i>=6) check = 1; }
        }

    if(check) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

    return 0;
}
