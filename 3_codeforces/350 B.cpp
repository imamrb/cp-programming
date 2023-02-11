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
    int n, k, i;

    cin>>n>>k;
    int arr[n];
    for(i=0; i<n; i++) cin>>arr[i];
    int sum =0; i = 1;

    while((sum+i)<k){
        sum += i;
        ++i;
    }
    i = k - sum;

    cout<<arr[i-1]<<endl;

}
