#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e9
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j, t, m, l, r ;

    cin>>n>>m;
    int arr[n+10]={0}, arr2[n+10]={0};
    vector<pair<int, pi> > v;

    int Max = MAX - 100;
    while(m--){
        cin>>t>>l>>r;
        v.pb({t,{l, r}});
    }

    bool flag = true;
    for(auto it: v){
        l = it.second.first;
        r = it.second.second;
        if(it.first==1){
            for(i=l; i<=r; i++){
                if(i<r) if(arr2[i]==1 && arr2[i+1]==1) flag = false;
                arr[i] = 1;
            }
        }
        else{
            for(i=l; i<=r; i++){
                if(i<r) if(arr[i]==1 && arr[i+1]==1) flag = false;
                arr2[i] = 1;
            }
        }
    }
    int ans[n+10]={0};
    if(flag){
        cout<<"YES"<<endl;
        ans[0] = 5000;
        if(arr[1]==1) arr[0] = 1;
        else arr2[0] = 1;

        for(i=1; i<=n; i++){
            arr[i] = arr[i-1];
            if(arr[i]==1 && arr[i-1]==1) ans[i] = ans[i-1]+1;
            if(arr2[i]==1 && arr2[i-1]==1) ans[i] = ans[i-1] - 1;

            cout<<ans[i]<<" ";
        }
    }
    else cout<<"NO"<<endl;

    return 0;


}
