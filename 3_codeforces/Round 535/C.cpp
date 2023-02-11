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

int main()
{
    IOS;

    int nn, q, i, j, k, a, b, x, low, high, m, n, Max, index;
    vector< pair<int, pi> > vi;

    cin>>nn>>q;

    for(i=0; i<q; i++){
        cin>>a>>b;
        vi.pb({b-a+1, {a, b}});
    }
    sort(rall(vi));
    x = q-2;
    index = 0;
    int sum = 0;
    for(i=0; i<x; i++){
        sum += (vi[index].first);
//        cout<<vi[index].first<<endl;
        low = vi[index].second.first;
        high = vi[index].second.second;
        Max = 0;
        for(j=0; j<q; j++){
            m = vi[j].second.first;
            n = vi[j].second.second;
            if(m>=low && m<=high){
                vi[j].second.first = high+1;
                if(vi[j].second.first>nn) vi[j].second.first = nn;
            }
            if(n>=low && n<=high){
                vi[j].second.second = low - 1;
                if(vi[j].second.second<1) vi[j].second.second = 1;
            }
            vi[j].first = vi[j].second.second - vi[j].second.first + 1;
            if(vi[j].first<0) vi[j].first = 0;
            if(vi[j].first>=Max){
                Max = vi[j].first;
                index = j;
            }
        }
    }
    cout<<sum<<endl;
}
