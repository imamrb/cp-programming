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
    int i, j, k, n, m, a;
    cin>>n>>k;
    deque<int> Q;
    int sz = 0;
    map<int, int> mp;
    for(i=0; i<n; i++){
        cin>>a;
        mp[a]++;
        if(mp[a]>1) continue;
        else{
            if(sz==k) {int q = Q.back();  mp[q] = 0;  Q.pop_back(); sz--;}
            Q.push_front(a);
            sz++;
        }
    }
    int Min = min(n, k);
    k = 0;
    sz = Q.size();
    cout<<min(Min, sz)<<endl;;
    while(k<Min && !Q.empty()){
        cout<<Q.front()<<" ";
        Q.pop_front();
        k++;
    }

    cout<<endl;

    return 0;


}
