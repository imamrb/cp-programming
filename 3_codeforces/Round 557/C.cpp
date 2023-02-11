#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)3e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j, k;
    cin>>n>>k;
    int arr[n+10] = {0}, a[MAX], q[n+1] = {0};

    int total = 2*(n-1) + n;

    cout<<total<<endl;

    for(i=1; i<=k; i++){
        cin>>a[i];
        arr[a[i]] = 1;
    }
    for(i=1; i<=k; i++){
        if(a[i]>1 && a[i]==a[i-1]+1) q[a[i]] = 1;
        if(a[i]>1 && a[i]==a[i-1]-1) q[a[i]] = 1;
    }
    if(arr[1]==1) total --;
    for(i=2; i<=n; i++){
        if(arr[i]==1) total--;
        if(q[i]) total-=2;
        else if(arr[i-1]==1) total --;
    }
    cout<<total<<endl;
}
