#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
    int n, i, j, z;

    cin>>n>>z;
    int arr[n];

    for(i=0; i<n; i++) cin>>arr[i];
    sort(arr, arr+n);

    int ans = 0;
    int mid = n/2;
    int d = mid;
    for(i=0; i<mid; i++){
        while(d<n && arr[d]-arr[i]<z) d++;
        if(d<n && arr[d]-arr[i]>=z) {
            ans++;
            d++;
        }
    }
    cout<<ans<<endl;
}
