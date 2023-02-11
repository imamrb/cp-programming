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
    int n, i, j, k, l, u, m1, m2;
    cin>>n;
    vector<int> a(n) , c(n);
    multiset<int> b;
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) {cin>>k; b.insert(k);}

    for(i=0; i<n; i++){
        k = n - a[i];
        auto l = b.lower_bound(k);
        if(l==b.end()) l = b.begin();

        if((*l)==k){
            c[i] = 0;
            b.erase(l);
        }
        else {
           auto u = l;
           l = b.begin();
           m1 = (a[i] + (*l)) % n;
           if(u!=l) m2 = (a[i] + (*u)) % n;
           else m2 = MAX;
           if(m1<=m2){c[i] = m1; b.erase(l); }
           else {c[i] = m2; b.erase(u); }
        }
    }
    for(i=0; i<n; i++) cout<<c[i]<<" "; cout<<endl;
}
