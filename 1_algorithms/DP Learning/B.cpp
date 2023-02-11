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
    int i, j, k;
    cin>>n;
    pi arr[n];
    for(i=0; i<n; i++) {
            cin>>arr[i].first;
            arr[i].second = i;
    }
    sort(arr, arr+n);
    i = 0;
    j = n-1;
    int Max = 0;
    while(i<j){
        d = min(arr[j].first, arr[i].first)/abs(arr[i].second - arr[j].second);
        Max = max(d, Max);
        if(arr[i].first>arr[j].first) i++;
        else --j;
    }


}
