#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, x, i;
    while(cin>>n>>x){
        int arr[MAX];
        for(i=0; i<n; i++) cin>>arr[i];
        for(i=0; i<n; i++) { cout<<(arr[i]^x)<<" "<<arr[i]<<endl; arr[i] = arr[i]^x; }
        for(i=0; i<n; i++) { cout<<(arr[i]^x)<<" "<<arr[i]<<endl; }
    }

}
