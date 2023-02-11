#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL t, n, a, b, x, y, z, c, i, j;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>a>>b>>x>>y>>z;

        priority_queue<LL>PQ;

        for(i=0; i<n; i++){
            cin>>c;
            if(c>0) PQ.push(c);
        }
        LL days = ceil((z-b)/(double)y);
//        cout<<days<<endl;
        if(days<=0) {
            cout<<"RIP"<<endl;
            continue;
        }
        --days;
        LL req = (z - a - (x*days));
        LL cnt = 0;
        while(!PQ.empty() && req>0){
            LL d = PQ.top();
            PQ.pop();
            req-=d;
//            cout<<d<<endl;
            LL w = d/2;
            if(w>0) PQ.push(w);
            cnt++;
        }
        if(req<=0) cout<<cnt<<endl;
        else cout<<"RIP"<<endl;
    }
    return 0;

}
