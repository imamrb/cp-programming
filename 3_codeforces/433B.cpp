#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i, j, mn, mx, rem;

    cin>>n>>k;
    if(k==0 || k==n) mn = 0;
    else mn = 1;

     rem = n - k;
     mx = min(2*k, rem);

    cout<<mn<<" "<<mx<<endl;

    return 0;
}
