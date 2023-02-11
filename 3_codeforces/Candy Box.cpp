#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
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
    int n, i, j, a, q;
    vector<int> arr(MAX), v;

    cin>>q;
    while(q--){
        fill(all(arr), 0);
        set<int> st;
        int cnt = 0;

        cin>>n;
        for(i=0; i<n; i++) { cin>>a; arr[a]++; st.insert(a); }
        for(auto it: st){
           v.pb(arr[it]);
        }
        sort(rall(v));
        for(auto it: v) cout<<it<<" "; cout<<endl;
        int l = v.size();
        cnt += v[0];
        for(i=1; i<l; i++){
            if(v[i]==v[i-1]) v[i]--;
            if(v[i]>0) cnt+= v[i];
        }
        cout<<cnt<<endl;

        v.clear();
    }

    return 0;

}
