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
    int n, i, j, t, a;
    cin>>t;

    while(t--){
        cin>>n;
        int arr[2050] = {0};
        for(i=0; i<n; i++){
            cin>>a;
            if(a<=2048) arr[a]++;
        }
        bool flag = false;
        if(arr[2048]>=1){
            flag = true;
        }
        else{
            int ans = 2048;
            for(int i=10; i>=0; i--){
                int a = (int)pow(2, i);
                int d = arr[a];
                int r = ans/a;
                ans = ans - (min(r, d)*a);
                if(ans==0) { flag = true; break; }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }






}
