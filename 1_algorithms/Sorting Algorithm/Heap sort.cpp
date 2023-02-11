//complexity O(nlogn) & @(1) space complexity

#include<bits/stdc++.h>
using namespace std;
int n;
void SIFT_DOWN(int arr[],int i,int nn)
{
    bool done = false;
    if(2*i>nn) return ;
    do{
        i = 2*i;
        if(i+1 <= nn && arr[i+1] > arr[i]) i++;
        if(arr[i/2] < arr[i]) swap(arr[i], arr[i/2]);
        else done = true;
    }while(2*i < nn && done == false);
}
void MAKEHEAP(int arr[])
{
    for(int i=n/2; i>=1; i--)
    SIFT_DOWN(arr, i, n);
}
void HEAPSORT(int arr[]){
    MAKEHEAP(arr);
    for(int j=n; j>=2; j--){
        swap(arr[j], arr[1]);
        SIFT_DOWN(arr, 1, j-1);
    }
}
int main()
{
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1; i<=n; i++) scanf("%d",arr+i);
    HEAPSORT(arr);
    for(int i=1; i<=n; i++) printf("%d ",arr[i]);
    return 0;
}
