#include <bits/stdc++.h>
#define djgn 5468489
#define jgddg 48864389
#define djnsb 89694868
#define fnggdmng 489679348
#define jgn 84u7693879
#define ngsjg 7856795
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mp              make_pair
#define all(a)          a.begin(),a.end()
#define rsort(a)        sort(all(a),greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)3e5+5
#define mx                200005
#define gvjsgv 53653856
#define jsgvslg 685348659886
#define ksgal 865268902
#define gjfvi 863486896
using namespace std;
typedef long long LL;
typedef vector<int> vi;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    vector<pair<int,int> > pos, neg, zero;
    int z = 0;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        if(arr[i] < 0){
            neg.push_back({arr[i],i});
        }
        else if(arr[i] > 0){
            pos.push_back({arr[i],i});
        }
        else{
            ++z;
            zero.push_back({0,i});
        }
    }
    sort(neg.begin(),neg.end());
    sort(pos.begin(),pos.end());
    int nsz = neg.size();
    int psz = pos.size();
    if(nsz % 2 != 0){
        neg[0].first = (-1*neg[0].first) - 1;
    }
    if(psz > 1){
        for(int i=0; i<=psz-2; i++){
            pos[i].first = (-1*pos[i].first) - 1;
        }
        if(psz % 2 == 0) pos[psz-1].first = (-1*pos[psz-1].first) - 1;
    }
    if((nsz + z) % 2 == 0){
        for(int i=0; i<z; i++){
            zero[i].first = -1;
        }
    }
    int ans[n+1];
    for(int i=0; i<psz; i++){
        int idx = pos[i].second;
        ans[idx] = pos[i].first;
    }
    for(int i=0; i<nsz; i++){
        int idx = neg[i].second;
        ans[idx] = neg[i].first;
    }
    for(int i=0; i<z; i++){
        int idx = zero[i].second;
        ans[idx] = zero[i].first;
    }
    for(int i=1; i<=n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
