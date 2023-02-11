#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)5e5+7
#define sieve_size 10000010
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;

    int n, i, j, a;
    cin>>n;

    queue<int> o, t;

    for(i=0; i<n; i++){
        cin>>a;
        if(a==1) o.push(1);
        else t.push(2);
    }
    if(!t.empty()){
        cout<<t.front()<<" ";
        t.pop();
    }
    if(!o.empty()){
        cout<<o.front()<<" ";
        o.pop();
    }
    while(!t.empty()){
        cout<<t.front()<<" ";
        t.pop();
    }
    while(!o.empty()){
        cout<<o.front()<<" ";
        o.pop();
    }

    cout<<endl;

}
