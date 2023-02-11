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
    LL n, d;
    cin>>n;

    if(n%2==0){
        d = n/2;
        if(d%2==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        --n;
        d = n/2;
        if(d%2==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
