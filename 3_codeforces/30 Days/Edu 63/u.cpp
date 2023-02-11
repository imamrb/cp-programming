#include<bits/stdc++.h>
#define LL long long


using namespace std;
int main()
{
    int n,last_8,eight=0;
    cin>>n;

    string s;
    cin>>s;

    for(int i=0;i<n;i++){
        if(s[i]=='8' && i+11<=n){
            eight++;
        }
    }

//    cout<<eight<<endl;

    int move = (n-11)/2;

    if(move<eight){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;




}
