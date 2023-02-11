#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL n, a, m, q, i;
    LL sum = 0, ans;

    cin>>n;
    vector<LL> arr(n);

    for(i=0; i<n; i++) {
            cin>>arr[i];
            sum += arr[i];
    }
    sort(rall(arr));
    cin>>q;
    for(i=0; i<q; i++){
        cin>>m;
        ans = sum - (LL)arr[m-1];
        cout<<ans<<endl;
    }
    return 0;
}
