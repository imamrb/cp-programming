#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e7+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;
LL countDivisors(LL n)
{
    int cnt = 0;
    int z = sqrt(n);
    for (int i = 2; i <= z; i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;

            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
int main()
{
    IOS;
    LL n, i, j, t, a;
    LL ans;

    cin>>t;
    while(t--){
        cin>>n;
        LL arr[n];
        LL Max = 0, Min = MAX;
        for(i=0; i<n; i++){
            cin>>arr[i];
            Max = max(Max, arr[i]);
            Min = min(Min, arr[i]);
        }
        bool flag = true;
        ans = Max * 1LL * Min;
        LL k = countDivisors(ans);
        if(k==n){
            for(i=0; i<n; i++){
                if(ans%arr[i]){
                        flag = false;
                        break;
                }
            }
        }
        else flag = false;
        if(flag) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }

}
