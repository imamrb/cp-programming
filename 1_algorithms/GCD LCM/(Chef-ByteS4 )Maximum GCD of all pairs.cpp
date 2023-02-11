#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e6+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int T, n, i, j, cnt, ans;

    cin>>T;
    while(T--){
        cin>>n;
        vector<int> v(n), fq(MAX, 0);
        int Max = 0;
        for(i=0; i<n; i++){
            cin>>v[i];
            Max = max(Max, v[i]);
            fq[v[i]]++;
        }
        ans = 0;
        for(i=Max; i>=1; i--){
            cnt = 0;
            j = i;
            for(j=i; j<=Max; j+=i){
                if(fq[j]>0) cnt+=fq[j];
            }
            if(cnt>1) { ans=i; break;}
        }
        cout<<ans<<endl;
    }
    return 0;
}
