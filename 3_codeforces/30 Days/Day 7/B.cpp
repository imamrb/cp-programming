#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const int mod = (int)1e9+7;

int main()
{
    IOS;
    int t, i, j, a, b, e, col, sum;
    vector<int> row(3000+1);
    row[0] = 1;
    int cnt = 0;
    for(i=1; i<=3000; i++){
        row[i] = cnt+row[i-1];
        cnt++;
    }
//    cout<<row[3000]<<endl;
    cin>>t;
    vector<pair<int, int> > v(3);
    while(t--){
        cin>>v[0].first>>v[0].second>>v[1].first>>v[1].second>>v[2].first>>v[2].second;
        sort(v.begin(), v.end());
        sum = 0;
        if(v[1].first == v[2].first){
            a = v[0].first; e = v[1].first;
            b = v[0].second; col = b;
            for(i=a; i<=e; i++){
                int val = row[i] + (b-1);
                int n = (col - b)+1;
                long long s = (n*(2*val + (n-1))/2);
                sum = (sum%mod + s%mod)%mod;
                col++;
            }
        }
        else{
            a = v[0].first; e = v[2].first;
            b = v[0].second; col = v[1].second;
            for(i=a; i<=e; i++){
                int val = row[i] + (b-1);
                int n = (col - b)+1;
                long long s = (n*(2*val + (n-1))/2);
                sum = (sum%mod + s%mod)%mod;
                b++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
