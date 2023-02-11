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
    int n, a, b, x, y;

    cin>>n>>a>>x>>b>>y;

    bool flag = false;
    while(1){
        a++;
        b--;
        if(b==0) b = n;
        if(a>n) a = 1;
        if(a==b) flag = true;
        if(a==x) break;
        if(b==y) break;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
