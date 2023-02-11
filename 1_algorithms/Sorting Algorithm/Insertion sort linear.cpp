//complexity between (n-1) and n(n-1)/2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,j; cin>>n;
    int count_comparison = 0;
    int ara[n+1];
    for(int i=1;i<=n;i++) cin>>ara[i];
    for(int i=2;i<=n;i++){
        x = ara[i];
        j = i-1;
        while(j>0 && ara[j]>x){
            ara[j+1] = ara[j];
            j = j-1;
        }
        ara[j+1]= x;
    }
    for(int i=1;i<=n;i++) cout<<ara[i]<<" ";
     cout<<endl;
}
