#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
#define INF             (int)1e8
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

const double PI = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;


bitset<MAX> bs;

int main()
{
    IOS;

    vi v;

    // to prevent sequence repetition between runs
    srand(time(NULL));

    int cnt = 0;

    while(cnt<20){
        int r = 500 + rand()%1000; //r = st + rand()%n;  end = n + st - 1;
        if(bs[r]==0) {v.pb(r); cnt++; bs[r]=1; }
    }
    sort(all(v));
    for(auto it: v) cout<<it<<" ";
    cout<<endl;
    int Max = maximum(v);
    cout<<"Max is: "<<Max<<endl;

    rsort(v);
    for(auto it: v) cout<<it<<" ";
    cout<<endl;
}
