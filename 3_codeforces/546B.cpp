#include<bits/stdc++.h>
using namespace std;
void coolness(int m);
int paid = 0;

int n;
int arr[10000], f[10000]={0};
int main()
{

    int i, j;
    cin>>n;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        f[arr[i]]++;
    }
    sort(arr, arr+n);

    for(int i=0; i<2*n; i++){
        if(f[arr[i]]>1){
            f[arr[i]]--;
            arr[i]++;
            f[arr[i]]++;
            ++paid;
            if(f[arr[i]]>1) coolness(i);
        }
    }
    cout<<paid<<endl;

    return 0;
}
void coolness(int m){
    for(int i=m; i<m+2; i++){
        if(f[arr[i]]>1){
            f[arr[i]]--;
            arr[i]++;
            f[arr[i]]++;
            ++paid;
            ++m;
            if(f[arr[i]]>1) coolness(i);
        }
        else if(f[arr[i]]==0) break;
    }
}
