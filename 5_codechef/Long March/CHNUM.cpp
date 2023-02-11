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
    int t, n, i, j, a;

    cin>>t;
    while(t--){
        cin>>n;
        int neg = 0, pos = 0;
        for(i=0; i<n; i++) {
                cin>>a;
                if(a<=0) neg++;
                else pos++;
        }
        if(neg==0) neg = pos;
        if(pos==0) pos = neg;
        cout<<max(neg, pos)<<" "<<min(neg, pos)<<endl;
    }
    return 0;
}
