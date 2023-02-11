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
    LL t, n, a, b, k, x, y, z, total, w;

    cin>>t;
    while(t--){
        cin>>n>>a>>b>>k;
        x = n/a;
        y = n/b;
        z = ((a*b)/__gcd(a,b));
        w = n/z;

        total = (x+y) - (2*w);

        if(total>=k) cout<<"Win"<<endl;
        else cout<<"Lose"<<endl;
    }
    return 0;
}
