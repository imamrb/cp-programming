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
const long long mod = 2*((long long)1e9+7);
int main()
{
    IOS;
    LL t, n, x, y, last, d, a, sum;

    cin>>t;

    while(t--){
        cin>>n>>x;
        y = (x+n-1);
        last = (x*2) - y - 1;
        d = y - x;
        n = (x-1)/d;
        if((x-1)%d==0) --n;
        a = last - (n-1)*d;
        sum = n%mod;
        sum = (sum*(2*a+((((n-1)%mod)*(d%mod))%mod)))%mod;
        sum = sum/2;
        sum = (sum + (x - 1)%mod)%mod;
        cout<<sum<<endl;
    }
    return 0;
}
