#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        all(a), greater<int>()
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
    int T, x, y, d;

    cin>>T;

    while(T--){
        vector<pi> v;
        for(x=0; x<101; x++){
            for(y=0; y<101; y++){
                printf("Q %d %d\n", x, y); fflush(stdout);
                scanf("%d", &d);
                if(d==0) v.pb({x, y});
            }
        }
        sort(all(v));
        int l = v.size() - 1;
        printf("A %d %d %d %d\n", v[0].first, v[0].second, v[l].first, v[l].second);
        fflush(stdout);
        scanf("%d", &d);
    }
    return 0;
}
