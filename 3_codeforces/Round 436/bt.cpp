#include<bits/stdc++.h>
using namespace std;
#define Mx 200010

bitset<Mx> bs;

int main()
{
    bs.reset();

    int n, j, i;
    int arr[Mx];
    cin>>n;

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int Max=0, ans;
    for(i=n-1; i>=0; i--){
        if(bs[arr[i]]==0){
            bs[arr[i]] = 1;
            stack<int> s;
            for(j=i+1; j<n; j++){
                s.push(arr[j]);
            }
            if(s.size()>=Max) {Max=s.size(); ans = arr[i]; }
        }
    }
    cout<<ans<<endl;

}
