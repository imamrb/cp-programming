#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, d;

    cin>>n;

    d = n/2;
    if(n%2==0) i = d-1, j = d+1;
    else  i = d, j=d+1;

    while(1){
        int g = __gcd(i, j);
        if(g==1){
            cout<<i<<" "<<j<<endl;
            break;
        }
        else{ --i; ++j;}
    }
    return 0;
}
