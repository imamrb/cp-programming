#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i=0;

    cin>>a>>b;

    if(a<=b){
        for(i=1; ; i++){
            a*=3;
            b*=2;
            if(a>b) break;
        }
    }
    cout<<i<<endl;

    return 0;
}
