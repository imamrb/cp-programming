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
int fx[] = {1,-1,0,0};
int fy[] = {0,0,1,-1};

int main()
{
    IOS;
    int i, t, n, m, k, r, c, cnt;
    map< pi, int> mymap;

    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        for(i=0; i<k; i++){
            cin>>r>>c;
            mymap[{r, c}]++;
        }
        cout<<"Print map using auto iterator: "<<endl;
        if(mymap.find({2, 1})!=mymap.end()) cout<<"Ok"<<endl;
        cout<<mymap.count({2, 1})<<endl;
        for(auto it: mymap){
            cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
        }
        cout<<"\nPrint map using default iterator: "<<endl;
        map< pi, int>::iterator it;
        for(it=mymap.begin(); it!=mymap.end(); it++){
            cout<<it->first.first<<" "<<it->first.second<<" "<<it->second<<endl;
        }
        mymap.clear();
    }
}
