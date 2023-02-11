#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, k, m;
    double total=0.0, d;

    cin>>n>>k;
    int fuck = n;
    for(i=0; i<n; i++){
        cin>>m;
        total+=m;
    }
    d = (double)total/n;
//    cout<<d<<endl;
    while( (k-d)>0.5){
        total+=k;
        ++n;
        d = total/n;
    }
    cout<<n-fuck<<endl;

    return 0;
}
