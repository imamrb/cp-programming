#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    int n, m, d, ans, x;
    cin>>n;
    m = sqrt(n);

    if((m*m)==n) ans = m*2;
    else{
        d = m+1;
        x = m*d;
        if(n<=x) ans = m+d;
        else ans = (m+d)+1;
    }
    cout<<ans<<endl;

    return 0;
}
