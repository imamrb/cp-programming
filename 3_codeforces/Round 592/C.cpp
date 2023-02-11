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

    LL n, p, d, w, i, j;
    LL x, y, z, r;
    cin>>n>>p>>w>>d;

    LL dd = ceil((double)p/(double)w);
    if(dd>n) cout<<"-1"<<endl;
    else if(p==0) cout<<0<<" "<<0<<" "<<n<<endl;
    else{
        i = p/d;
        for(y=i; y>=0; y--){
            r = p - (y*d);
            if(r%w==0){
                x = r/w;
                z = n - (x+y);
                if(x+y>n){
                    break;
                }
                else if(x+y+z==n && x*w+y*d==p){
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    return 0;
                }
            }
        }
        cout<<"-1"<<endl;
    }

    return 0;


}
