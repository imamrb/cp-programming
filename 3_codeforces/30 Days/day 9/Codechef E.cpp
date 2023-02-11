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
    int n, i, t, j, val;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int l = s.length();
        int arr[30] = {0};
        for(i=0; i<l; i++){
            int x = s[i] % 64;
            arr[x]++;
        }
        sort(arr, arr+27, greater<int>());

//        int l;
//        cin>>l;
//        for(i=1; i<=5; i++){
//            cin>>arr[i];
//        }
        int Min = (int)1e6+7;
        for(i=1; i<=26; i++){
            if(l%i==0){
               int cost = 0;
               int d = l/i;
               if(d>26){ val=d; d=i;}
               else val=i;

               for(j=0; j<d; j++){
                 if(arr[j]<val) cost += (val-arr[j]);
               }
               Min = min(Min, cost);
            }
        }
        cout<<Min<<endl;
    }
    return 0;
}
