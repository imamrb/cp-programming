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
LL n, k, a, b, i, j, q;

bool check(LL mid){
    LL rem = n - mid;
    if((mid*a)+(rem*b) < k) return true;
    else return false;
}
int main()
{
    IOS;
    cin>>q;
    while(q--){
        cin>>k>>n>>a>>b;
        LL lo = 0, hi = n, ans = -1;
        while(lo<=hi){
            LL mid = lo + (hi-lo)/2;
            if(check(mid)) { ans = mid; lo = mid + 1; }
            else hi = mid - 1;
        }
        cout<<ans<<endl;
    }
    return 0;

}
