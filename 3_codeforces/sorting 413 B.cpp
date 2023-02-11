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
    int n, i, j, m, a;

    cin>>n;
    pair<int, pi> p[n];

    for(i=0; i<n; i++) cin>>p[i].first;
    for(i=0; i<n; i++) cin>>p[i].second.first;
    for(i=0; i<n; i++) cin>>p[i].second.second;
    sort(p, p+n);

    cin>>m;
    int ans[m], nai[5]={0}, jump[5]={0};

    for(i=0; i<m; i++){
        cin>>a;

        if(nai[a]==-1) { ans[i] = -1; continue; }

        for(j = jump[a]; j<n; j++){
            if(p[j].second.first==a || p[j].second.second==a){
                ans[i] = p[j].first;
                p[j] = {0, {0, 0}};
                jump[a] = j+1;
                break;
            }
        }
        if(j==n) { nai[a] = -1; ans[i] = -1; }
    }
    for(i=0; i<m; i++) cout<<ans[i]<<" "; cout<<endl;

    return 0;

}
