#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;

    cin>>n>>m>>k;

    double r = ceil((k/(m*2.00)));

    double d = ceil((k%(m*2))/2.00);
    if(d==0) d = m;

    cout<<r<<" "<<d<<" ";
    if(((k%(m*2))%2)==0) cout<<"R"<<endl;
    else cout<<"L"<<endl;

    return 0;
}
