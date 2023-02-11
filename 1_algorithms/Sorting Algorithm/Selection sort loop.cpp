//complexity n(n-1)/2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n;
    int count_comparison = 0;
    int ara[n+1];
    for(int i=1;i<=n;i++) cin>>ara[i];
    for(int i=1;i<=n-1;i++){
        k = i;
        for(int j=i+1;j<=n;j++){
            if(ara[j]<ara[k]) k = j;
        }
        if(i!=k) swap(ara[i], ara[k]);
    }
    for(int i=1;i<=n;i++) cout<<ara[i]<<" ";

    cout<<endl;
}
