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
    int t, n, m, k, i, j;

    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        i = __gcd(n, k);
        j = __gcd(m, k);
        if(i==1 && j==1) cout<<n*1LL*m<<endl;
        else cout<<"-1"<<endl;
    }

    return 0;
}
