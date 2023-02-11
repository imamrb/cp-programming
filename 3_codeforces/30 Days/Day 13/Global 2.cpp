#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         all(a), greater<int>()
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
    int n, m, k, i, j, len;

    while(cin>>n>>m>>k){
        vi v(n), dis;
        for(i=0; i<n; i++){
                cin>>v[i];
                if(i) dis.pb(v[i]-v[i-1]-1);
        }
        sort(all(dis));
        len = n;
        for(i=0; i<(n-k); i++) len += dis[i];

        cout<<len<<endl;
    }
    return 0;
}
