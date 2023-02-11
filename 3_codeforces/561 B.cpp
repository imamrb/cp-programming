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
    int n, i, j, k;
    cin>>n;
    string s = "aeiou";
    k = sqrt(n);
    int c = 0, r = 0;
    for(i=5; i<=k; i++){
        if(n%i==0 && n/i>=5){
            r = i;
            c = n/i;
            break;
        }
    }

    if(r){
      int m = 0;
      for(i=0; i<r; i++){
         k = m;
         for(j=0; j<c; j++){
            cout<<s[k++];
            if(k==5) k = 0;
         }
         m = m + 1;
         if(m==5) m = 0;
      }
      cout<<endl;
    }
    else cout<<"-1"<<endl;

    return 0;
}
