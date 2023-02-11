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
    int n, i, j, l, k, ans, a, d;
    cin>>n>>k;

    int fq[k+10]={0};
    for(i=0; i<n; i++){
        cin>>a;
        ++fq[a%k];
    }
    ans = fq[0]/2;
    if(k%2==0) ans += (fq[k/2]/2);
    cout<<ans<<endl;

    for(i=1; i<=k/2; i++){
        d = k - i;
        if(i!=d) ans += min(fq[i], fq[d]);
    }

    cout<<ans*2<<endl;

    return 0;

}
