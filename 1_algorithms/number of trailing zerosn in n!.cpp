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
    LL n, ans;

    //number of trailing zeros in n!
    //is equal to the number of 5's in the number
    while(cin>>n){
        ans = 0;
        while(n>1){
            ans+=(n/5);
            n/=5;
        }
        cout<<"Number of trailing zeros in n! = "<<ans<<endl;
    }
    return 0;
}
