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

    int n, i, j, d;

    cin>>n;

    d = n%4;
    if(d==0) cout<<"1 "<<"A"<<endl;
    else if(d==1) cout<<"0 "<<"A"<<endl;
    else if(d==2) cout<<"1 "<<"B"<<endl;
    else cout<<"2 "<<"A"<<endl;

    return 0;


}
