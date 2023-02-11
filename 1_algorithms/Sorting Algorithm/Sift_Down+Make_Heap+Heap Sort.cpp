#include<bits/stdc++.h>
using namespace std;

int n;

void SIFT_DOWN(int ara[],int i,int nn)
{
    bool done = false;
    if(2*i>nn) return ;

    do{
        i = 2*i;
        if(i+1<=nn && ara[i+1]>ara[i]) i++;
        if(ara[i/2]<ara[i]) swap(ara[i],ara[i/2]);
        else done = true;
    } while(2*i<nn && done==false);

}

void MAKEHEAP(int ara[])
{
    for(int i=n/2;i>=1;i--)
        SIFT_DOWN(ara,i,n);
}

void HEAPSORT(int ara[])
{
    MAKEHEAP(ara);
    for(int i=1;i<=n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;
    for(int j=n;j>=2;j--){
        swap(ara[j],ara[1]);
        SIFT_DOWN(ara,1,j-1);
    }
}


int main()
{
    cin>>n;
    int ara[15];
    for(int i=1;i<=n;i++) cin>>ara[i];
    HEAPSORT(ara);
    for(int i=1;i<=n;i++) cout<<ara[i]<<" ";
}


