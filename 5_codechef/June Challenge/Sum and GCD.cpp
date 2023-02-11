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
    int t, n, a, i, j;

    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        for(i=0; i<n; i++){
            cin>>a;
            v.pb(a);
        }
        sort(all(v));
        int one = v[n-1];
        int two = v[0];
        int g1, g2, g3, Max;
        for(i=1; i<n-1; i++){
            g1 = __gcd(one, v[i]);
            g2 = __gcd(two, v[i]);
            g3 = __gcd(one, two);
            Max = max(g1+two, max(g2+one, g3+v[i]));
            if(Max==(g1+two)) one = g1;
            else if(Max==(g2+one)) two = g2;
            else one = g3, two = v[i];
        }
        cout<<one+two<<endl;
    }
}
