#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, d;

    cin>>n>>k;

    d = 240 - k;
    int i, j, p=0;
    for(i=0, j=1; i<d, j<=n; j++){
        i+=j*5;
        if(i<=d) ++p;
        else break;
    }

    cout<<p<<endl;

    return 0;
}
