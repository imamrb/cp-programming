#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0);
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
inline bool cmp(pill a, pill b){
    return (a.first-a.second)>(b.first-b.second);
}
int main()
{
    IOS;
    int t, n, k, x, i, a, j, d;

    cin>>t;

    while(t--){
        cin>>n;
        vector<int> in;
        int total = 0, zero = 0;
        for(i=0; i<n; i++) {
            cin>>a;
            in.pb(a);
            total+=a;
            if(a==0) zero++;
        }
        cin>>k>>x;
        if(x==0) cout<<total<<endl;
        else{
            sort(all(in));
            int sum = total;
            int sum1 = 0, sum2 = 0, cnt = 0, m = 1;
            for(i=0; i<n; i++){
                sum1 += in[i];
                sum2 += (x^in[i]);
                cnt++;
                if(cnt==(k*m)){
                    if(sum2>sum1){
                        sum += sum2;
                        sum -= sum1;
                        sum1 =0, sum2 = 0;
                        ++m;
                    }
                    else break;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;

}
