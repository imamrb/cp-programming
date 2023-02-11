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

int main()
{
    IOS;
    int n, q, i, j;
    cin>>q;
    while(q--){
        cin>>n;
        LL h[n], p[n];
        LL dp[n] = { 0 };
        for(i=0; i<n; i++){
            cin>>h[i]>>p[i];
        }
        for(int i=1; i<n; i++){
            if(h[i]==h[i-1]){
                dp[i][0] = dp[i-1][0] + p[i];
                dp[i][1] =
                if(min(p[i], p[i-1])==p[i]) h[i]++;
                else h[i-1]++;
            }
        }
        cout<<dp[n-1]<<endl;
    }

    return 0;


}
