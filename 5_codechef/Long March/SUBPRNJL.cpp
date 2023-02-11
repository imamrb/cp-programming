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
int arr[2001][2001];

int main()
{
    IOS;
    int n, k, a, t, i, j, index, value, m, nice;


    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        vector<int> sub[n];

        nice = 0;
        for(i=0; i<n; i++) cin>>v[i];
        for(i=0; i<n; i++){
           for(j=0; j<=i; j++){
             sub[i].pb(v[j]);
             arr[i][v[j]]++;
           }
           sort(all(sub[i]));
        }
        for(i=0; i<n; i++){
            for(j=i; j<n; j++){
                int sz = (j-i + 1 );
                m = k/sz; if(k%sz!=0) m++;
                index = k/m; if(k%m==0) --index;
                value = sub[j][index];
                if(arr[j][arr[j][value]]>0) nice++;
                auto it = lower_bound(sub[j].begin(), sub[j].end(), v[i]);
                sub[j].erase(it);
                arr[j][v[i]]--;
            }
        }
        cout<<nice<<endl;
    }
    return 0;
}
