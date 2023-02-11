#include<bits/stdc++.h>
using namespace std;
int k,ara[100],n;
void Sort(int i)
{
    if(i<n){
        k = i;
        for(int j=i+1;j<=n;j++){
            if(ara[j]<ara[k]) k = j;
            if(k!=i){
                swap(ara[i],ara[k]);
            }
        }
        Sort(i+1);
    }
}
int main()
{
    cin>>n;
    int count_comparison = 0;
    for(int i=1;i<=n;i++) cin>>ara[i];
    Sort(1);
    for(int i=1;i<=n;i++) cout<<ara[i]<<" ";
}
