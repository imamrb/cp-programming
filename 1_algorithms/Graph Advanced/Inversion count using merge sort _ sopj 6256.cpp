#include<bits/stdc++.h>
using namespace std;

long long inv_count;

int Merge(int arr[],int temp[],int left,int mid,int right)
{
    int i = left,j = mid,k = left;
    while((i <= mid-1) and (j <= right)){
        if(arr[i] <= arr[j]) temp[k++] = arr[i++];
        else{
                temp[k++] = arr[j++];
                inv_count += (mid - i);
        }
    }
    while(i <= mid-1) temp[k++] = arr[i++];
    while(j <= right) temp[k++] = arr[j++];
    for(i=left; i<=right; i++) arr[i] = temp[i];
}
int MergeSort(int arr[],int temp[],int left,int right)
{
    int mid;
    if(right > left){
        mid = (right+left) >> 1;
        MergeSort(arr,temp,left,mid);
        MergeSort(arr,temp,mid+1,right);
        Merge(arr,temp,left,mid+1,right);
    }
}

int main()
{
    int t, i, n;

    cin>>t;
    while(t--){

        cin>>n;
        int arr[n], temp[n];
        for(i=0; i<n; i++){
            cin>>arr[i];
        }
        inv_count = 0;
        MergeSort(arr,temp,0,n-1);

        cout<<inv_count<<endl;
    }
    return 0;
}
