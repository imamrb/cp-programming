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

int main()
{
    IOS;

    int Max, i, a, b, x, y, n, m, j;
    cin>>n>>m;

    int arr[n+10] = {0};
    Max = 1;
    map<pi, int> mp;
    vector<pi> v;

    for(i=0; i<m; i++){
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
        if(a>b) swap(a, b);
        mp[{a, b}]++;
    }
    for(i=1; i<=n; i++){
        v.pb({arr[i], i});
    }
    sort(rall(v));

    bool flag = false;
    int rem;
    for(i=0; i<n; i++){
        a = v[i].second;
        for(j=i+1; j<n; j++){
            if(v[i].first+v[j].first<m) break;

            a = v[i].second;
            b = v[j].second;
            if(a>b) swap(a, b);
            rem = arr[b] - mp[{a, b}];
            if(arr[a]+rem==m){
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
