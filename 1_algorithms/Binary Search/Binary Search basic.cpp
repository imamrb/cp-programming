#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr [100], int lo, int hi, int x)
{
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    return -1;
}
int main()
{
    int arr[10] = {11, 12, 13, 14, 15, 15, 17, 18, 19, 20};
    int lo = 0, hi = (sizeof(arr)/sizeof(arr[0])) - 1;

    cout<<BinarySearch(arr, lo, hi, 15)<<endl;

    int i = lower_bound(arr, arr+10, 15) - arr;
    int j = upper_bound(arr, arr+10, 15) - arr;
    cout<<i<<" "<<j<<endl;

    cout<<j-i<<endl;
    if (binary_search(arr, arr+10, 15)) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;
    int r = lower_bound(arr, arr+10, 15) - arr; //print 4
    cout<<r<<endl;
    r = lower_bound(arr, arr+10, 25) - arr; //print 10
    cout<<r<<endl;
    int p = upper_bound(arr, arr+10, 20) - arr; // print 6 : “position of next higher number than num”
    cout<<p<<endl;
}

