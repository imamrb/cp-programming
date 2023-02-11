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
    int n, i, j, l, k;
    string s;

    cin>>n>>s;
    l = s.length();
    for(i=1; i<l; i++){
        if(s[i-1]>s[i]){
            k = i;
            break;
        }
    }
    if(i==l) cout<<"NO"<<endl;
    else {
            cout<<"YES"<<endl;
            cout<<k<<" "<<k+1<<endl;
    }
    return 0;
}
