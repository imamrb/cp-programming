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
    LL n, d, m, k, i, a,  j;

    vector<LL> v;

    cin>>n>>m>>k;
    for(i=0; i<m; i++){
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    LL carry = 0, page=0, cnt= 0, step = 0;
    page = (v[0]-carry)/k;
    if((v[0]-carry)%k==0) { page--;}

    for(i=0; i<m; i++){
        d = (v[i]-carry)/k;
        if((v[i]-carry)%k==0) { d--;}
        if(d!=page){
            carry += cnt;
            step++;
            page = (v[i]-carry)/k;
            if((v[i]-carry)%k==0) { page--;}
            cnt = 1;
        }
        else cnt++;
    }
    if(cnt) step++;

    cout<<step<<endl;


}
