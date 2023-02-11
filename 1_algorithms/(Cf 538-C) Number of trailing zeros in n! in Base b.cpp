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
    LL n, b, k, cnt, cnt2, ans, i, m;


    while(cin>>m>>b){
        ans = (LL)1e18;
        for(i=2; i<=b; i++){
            if(i*i>b) i = b;
            cnt = 0;
            while(b%i==0){
                b/=i;
                cnt++;
            }
            if(cnt==0) continue;
            cnt2 = 0;
            n = m;
            while(n>1){
                cnt2 += (n/i);
                n/=i;
            }
            ans = min(ans, cnt2/cnt);
        }
        cout<<ans<<endl;
    }
    return 0;

}
