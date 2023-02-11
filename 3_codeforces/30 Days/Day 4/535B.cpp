#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>  v;
    int n, i, a;

    int arr[10005] = {0};

    cin>>n;

    int Max = 1;
    for(i=0; i<n; i++){
        cin>>a;
        if(arr[a]==0) arr[a] = 1;
        else arr[a]++;
        Max = max(Max, a);
    }
    for(i=1; i*i<=Max; i++){
        if(Max%i==0){
            int d = Max/i;
            arr[d]--;
           if (i!=d) arr[i]--;
        }
    }
    int Max2 = 1;
    for(i=1; i<=Max; i++){
        if(arr[i]==1) Max2 = max(Max2, i);
    }

    cout<<Max<<" "<<Max2<<endl;

    return 0;

}
