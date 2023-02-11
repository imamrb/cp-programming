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
void multi(int beg, int en){
        int mul = 1;
        while(1){
            cout<<beg*mul<<" "<<en*mul<<endl;
            if(beg*mul-(en*(mul-1)) == 1 ) break;
            mul++;
        }
}
int main()
{
    IOS;
    int i, j, n, x, y, z;

    while(cin>>x>>y>>n){
        bitset<MAX> bs;
        set<int> reach, nreach;
        multi(x, y);
        if(x>y) swap(x, y);
        bs[x] = 1; bs[y] = 1;
//        bs[z] = 1;
        for(i=x; i<=n; i++){
            if(bs[i]){
                if(i+x<=n) { bs[i+x] = 1; reach.insert(i+x);}
                if(i+y<=n) { bs[i+y] = 1; reach.insert(i+y);}
//                if(i+z<=n) { bs[i+z] = 1; reach.insert(i+z);}
            }
        }
        for(i=x; i<=n; i++) if(bs[i]==0) nreach.insert(i);

        cout<<"Reachable"<<endl;
        for(auto it: reach) cout<<it<<" "; cout<<endl;
        cout<<"Non Reachable"<<endl;
        for(auto it: nreach) cout<<it<<" "; cout<<endl;
    }

}
