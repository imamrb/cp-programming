/// Time Complexity: O(nlogn)
#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[],int left,int mid,int right)
{
    int i = left, j = mid+1, k = left;
    int temp[right];
    while((i <= mid) and (j <= right)){
        if(arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while(i <= mid) temp[k++] = arr[i++];
    while(j <= right) temp[k++] = arr[j++];
    for(i=left; i<=right; i++) arr[i] = temp[i];
}
void MergeSort(int arr[],int left,int right)
{
    int mid;
    if(right > left){
        mid = left + (right-left)/2;
        MergeSort(arr,left,mid);
        MergeSort(arr,mid+1,right);

        Merge(arr,left,mid,right);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d",arr+i);
    MergeSort(arr,0,n-1);
    for(int i=0; i<n; i++) printf("%d ",arr[i]);
    return 0;
}
