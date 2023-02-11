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
    LL i, n, t,a, b, j;

    cin>>t;

    while(t--){
       cin>>n;
       vector<LL> v;
       for(i=0; i<n; i++){
         cin>>a;
         v.pb(a);
       }
       sort(all(v));
      LL cnt = 0;
      for(i=0; i<n; i++){
        if(v[i]%3==0){v[i]=0; cnt++;}
      }
      for(i=0; i<n; i++){
         if(v[i]==0) continue;
         else{
            for(j=i+1; j<n; j++){
                if((v[i]+v[j])%3==0){ cnt++; v[i]=0; v[j]=0; break;}
            }
            if(j==n){
                j = i+1;
                if(j<n){
                    while(j<n && v[j]==0) ++j;
                    v[j] = v[i] + v[j];
                    i = j-1;
                }
            }
         }
      }
      cout<<cnt<<endl;
    }
}
