#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, j=0, sum, arr[100000];

    cin>>n;
    sum = 0;
    int m = n;
    while(sum!=m){
        if(n!=3) {n-=2; arr[j++]=2; sum+=2; }
        else {n-=3; arr[j++]=3; sum+=3;}
    }
    printf("%d\n", j);
    for(int i=0; i<j; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
