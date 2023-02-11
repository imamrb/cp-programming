#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1010];
    int i, j, n;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(i=1; i<n-1; i++){
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1])) cnt++;
    }
    cout<<cnt<<endl;
}
