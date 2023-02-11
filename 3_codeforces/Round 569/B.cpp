/*
Author: Santho07
Noakhali Science & Technology University, Bangladesh.
*/
#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e6+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int i, n, a;
    cin>>n;
    vector<int> v;

    for(i=0; i<n; i++){
        cin>>a;
        v.pb(a);
        if(a>=0) v[i] = -v[i] - 1;
    }
    if(n%2){
        int minPos = min_element(all(v)) - v.begin();
        v[minPos] = - v[minPos] - 1;
    }
    for(i=0; i<n; i++) cout<<v[i]<<" "; cout<<endl;

    return 0;

}
