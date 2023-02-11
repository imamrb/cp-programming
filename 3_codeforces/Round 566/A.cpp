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
    LL n, i, j;

    cin>>n;

    LL d = 3*n;

    if(d%2==0){
        d = d/6;
        int cnt = 1;
        for(i=1; i<=d; i++) cnt*=2;

        cout<<cnt<<endl;
    }
    else cout<<0<<endl;
    return 0;
}
