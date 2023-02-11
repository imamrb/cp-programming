#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    int w, h, i, j, w1, w2, h1, h2;
    cin>>w>>h;
    cin>>w1>>h1;
    cin>>w2>>h2;
    int total = w;
    for(i=h; i>=0; i--){
        total += i;
        if(i==h1) total -= w1;
        else if(i==h2) total -= w2;
        if(total<0) total = 0;
    }

    cout<<total<<endl;

    return 0;
}
