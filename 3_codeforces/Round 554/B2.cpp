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


int main()
{
    IOS;
    int n, i, j, d;
    int arr[30];

    cin>>n;
    d = n + 1;
    if(n==1 || !(d & (d-1))) {cout<<0<<endl; return 0;}

    arr[0] = 1;
    arr[1] = 2;
    for(i=2; i<=22; i++){
        d = (int)pow(2, i);
        arr[i] = d;
        if(d>n) break;
    }
   d--;

   bool flag = false;
   vector<int> v;
    while(n<d){
       int k = d - n;
       for(i=0; i<=22; i++){
            if(arr[i]>k) break;
        }
        v.pb(i);
        n = n ^ (arr[i] - 1);
        if(n==d) {flag = true; break;}
        n++;
    }

    int sz = v.size();
    if(flag) cout<<sz*2 - 1<<endl;
    else cout<<sz*2<<endl;
    for(i=0; i<sz; i++) cout<<v[i]<<" "; cout<<endl;

}
