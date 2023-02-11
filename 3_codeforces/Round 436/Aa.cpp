#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s, d, i, st;

    cin>>n;

    st = 0;
    for(i=0; i<n; i++){
        cin>>s>>d;
        while(s<=st){
            s+=d;
        }
        st = s;
    }
    cout<<st<<endl;
}
