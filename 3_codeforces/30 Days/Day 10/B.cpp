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
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    ll n, k, m, i, Min, x, sum = 0;
    cin>>n>>k>>m;
    vector<ll> v(n);

    double avg, cnt;
    for(i=0; i<n; i++){
        cin>>v[i];
        sum+= v[i];
    }
    sort(all(v));
    Min = min((n*k), m);
    avg = (1.0*(sum+Min))/(1.0*n);
    x = min(n-1, m); //the line!!!!!!!
    for(i=0; i<x; i++){
        sum -= v[i];
        --n;
        --m;
        Min = min((n*k), m);
        cnt = (1.0*(sum+Min))/(1.0*n);
        avg = max(avg, cnt);
    }
    cout<<fixed<<std::setprecision(20)<<avg<<endl;

    return 0;
}
