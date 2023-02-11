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
    int n, i, j, o1=0, e1=0, o2=0, e2=0, m, ans, a;

    cin>>n>>m;
    for(i=0; i<n; i++){
        cin>>a;
        if(a%2==0) e1++;
        else o1++;
    }
    for(i=0; i<m; i++){
        cin>>a;
        if(a%2==0) e2++;
        else o2++;
    }
    ans = min(e1, o2) + min(o1, e2);

    cout<<ans<<endl;


}
