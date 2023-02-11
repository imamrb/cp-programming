#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, j, arr[100010], f[100010]={0};

    cin>>n;
    for(i=0; i<n; i++){
        scanf("%I64d", &arr[i]);
    }
    sort(arr, arr+n);

    f[0] += arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>=f[i-1]) f[i]+=(f[i-1]+arr[i]);
        else f[i] = f[i-1];
    }

    long long c = 1;
    for(i=1; i<n; i++){
        if(f[i-1]<=arr[i]) c++;
    }

    cout<<c<<endl;

    return 0;
}
