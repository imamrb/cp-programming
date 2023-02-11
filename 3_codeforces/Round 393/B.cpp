#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[13]={31,28,31,30,31,30,31,31,30,31,30,31};
    int n, d, i;

    cin>>n>>d;
    int c = 1;
    n = arr[n-1];

    n -= (8-d);
    c += n/7;
    n -= (7*(n/7));
    if(n>0) c++;

    cout<<c<<endl;

    return 0;
}

