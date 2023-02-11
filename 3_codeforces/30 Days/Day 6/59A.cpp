#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, n, i, j;


    cin>>q;
    while(q--){
        string s;
        cin>>n;
        cin>>s;
        if(n==2){
            if(s[1]>s[0]){
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<s[0]<<" "<<s[1]<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<s[0]<<" ";
            for(i=1; i<n; i++) cout<<s[i];
            cout<<endl;
        }
    }
    return 0;
}
