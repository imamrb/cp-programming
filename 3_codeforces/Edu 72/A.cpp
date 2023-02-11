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
    LL t, n, i, j, st, in, ex;
    cin>>t;

    while(t--){
        cin>>st>>in>>ex;
        st+=ex;
        LL  ans = 0;
        if(st>in){
            ans = 1;
            LL lo = in, hi = st, d = 0;
            LL lox = 0, hix = ex;
            while(lox<=hix){
                LL mid = lox + (hix-lox)/2;
                if(lo+mid<hi-mid){
                    lox = mid+1;
                    d = mid;
                }
                else{
                    hix = mid-1;
                }
            }
            ans+=d;
        }
        cout<<ans<<endl;

    }

    return 0;

}
