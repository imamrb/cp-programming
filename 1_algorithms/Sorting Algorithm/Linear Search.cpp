#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[], int lo, int hi, int x)
{
    for(int i=lo; i<=hi; i++){
        if(arr[i]==x) return i;
    }
    return -1;
}
void BubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>=i; j--){
            if(arr[j]<arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
int main()
{
    int arr[] = {12, 10, 11, 15, 13, 19, 17, 18, 20, 14};
    int x, lo = 0, hi = (sizeof(arr)/sizeof(arr[0])) - 1;
    BubbleSort(arr, hi);
    for(int i=0; i<=hi; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\nEnter the number to search: \n");
    while(scanf("%d", &x)==1){
        int r = LinearSearch(arr, lo, hi, x);
        if(r<0) printf("%d is not found in the array\n\n", x);
        else printf("%d is found at position %d\n\n", x, r+1);
    }
    return 0;
}

