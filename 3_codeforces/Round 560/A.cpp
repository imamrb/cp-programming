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
    string n;
    int k, x, y, i, j, cnt=0;

    cin>>k>>x>>y;
    cin>>n;
    x++; y++;
    int l = n.length();
    i = l-x; j = l - y;
    if(n[i]!='1') cnt++;
    if(n[j]!='1') cnt++;
    for(i=i+1; i<j; i++){
        if(n[i]!='0') cnt++;
    }
    for(i=j+1; i<l; i++){
        if(n[i]!='0') cnt++;
    }
    cout<<cnt<<endl;

}
