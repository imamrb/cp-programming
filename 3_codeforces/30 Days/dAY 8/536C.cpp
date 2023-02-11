#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back pb;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const double pi=acos(-1);

int main()
{
    IOS;
    int n, i, j, a;

    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int m = n/2;
    ll sum = 0, s;
    for(i=0; i<m; i++){
        s = (v[i] + v[n-i-1]);
        sum += (s*s);
    }
    cout<<sum<<endl;

    return 0;
}
