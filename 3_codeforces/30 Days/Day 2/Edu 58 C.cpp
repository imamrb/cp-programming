#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, l, r, i, n;

    cin>>T;
    while(T--){
        cin>>n;
        int arr[n+1]={0}, arr2[n+1]={0};
        vector<int> v;
        for(i=0; i<n; i++){
            cin>>l>>r;
            bool flag1=false, flag2 = false;
            if(arr[l]==1 || arr[r]==1) {
                    arr[l]=1, arr[r] = 1;
                    v.push_back(1);
                    flag1 = true;
            }
            if(arr2[l]==1 || arr2[l]==1){
                arr2[l] = 1, arr2[r] =1;
                v.push_back(2);
                flag2 = true;
            }
            if(flag1==true && flag2==true){
                printf("-1");
                break;
            }
            else if (flag1==false && flag2==false){
                v.push_back(1);
                arr[l] = 1; arr[r] =1;
            }
        }
        if(i==n){
            for(i=0; i<n; i++){
                    printf("%d ", v[i]);
            }
        }
        cout<<endl;
    }
    return 0;
}
