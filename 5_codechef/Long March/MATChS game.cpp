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
    LL t, n, i, j, m;

    cin>>t;
    while(t--){
        cin>>n>>m;
        if(m>n) swap(n, m);
        LL cnt = 0;
        while(1){
            cnt ++;
            if(n%m==0) break;
            else n -= m;
            if(n<=0) break;
            if(m>n) swap(n, m);
        }
        if(cnt%2) cout<<"Ari"<<endl;
        else cout<<"Rich"<<endl;
    }

    return 0;
}
