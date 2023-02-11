#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e9+1
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;
bitset<20000000> bs(0);

int main()
{
    IOS;
    int n, i, j;
    cin>>n;
    vector<int> sq, v(n);

    int m = 1;
    sq.pb(1);
    for(i=1; i<=30; i++){
        m*=2;
        sq.pb(m);
    }
    map<int, int> mymap;

    for(i=0; i<n; i++) {
            cin>>v[i];
            ++mymap[v[i]];
    }

    int cnt = 0;
    m = sq.size();
    int flag;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            int x = sq[j] - v[i];
            if(x==v[i]) flag = 2;
            else flag = 1;
            if(mymap[x]>=flag){
//                cout<<sq[j]<<" "<<v[i]<<" "<<x<<endl;
                break;
            }
        }
        if(j==m) {
            cnt++;
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
    cout<<cnt<<endl;
}
