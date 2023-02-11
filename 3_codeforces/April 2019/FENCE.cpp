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
            mymap.insert({{r, c}, 1});
        }
        cnt = 0;
        for(auto it: mymap){
            for(k=0; k<4; k++){
                int tx = it.first.first + fx[k];
                int ty = it.first.second + fy[k];
                if(mymap.find({tx, ty})==mymap.end()) cnt++;
            }
        }
        cout<<cnt<<endl;
        mymap.clear();
    }
    return 0;
}
