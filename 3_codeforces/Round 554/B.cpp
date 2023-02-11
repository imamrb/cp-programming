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

    cin>>n;
    d = n + 1;
    if(n==1 || !(d & (d-1))) {cout<<0<<endl; return 0;}

    int arr[30];
    arr[0] = 1;
    arr[1] = 2;
    for(i=2; i<=22; i++){
        d = (int)pow(2, i);
        arr[i] = d;
        if(d>n) break;
    }
    bitset<22> bs;

    --d;
    bs = bitset<22>(n);
    string in = bs.to_string();
    bs = bitset<22> (d);
    string out = bs.to_string();

    vector<int> v;
    bool flag = false;
    for(i=0; i<=22; i++){
        if(in[i]!=out[i]){
            int k = 22 - i;
            n = (arr[k]-1)^n;
            v.pb(k);
            if(n==d) {flag = true; break;}
            n++;
            bs = bitset<22>(n);
            in = bs.to_string();
        }
    }
    int sz = v.size();
    if(flag) cout<<sz*2 - 1<<endl;
    else cout<<sz*2<<endl;
    for(i=0; i<sz; i++) cout<<v[i]<<" "; cout<<endl;

    return 0;
}
