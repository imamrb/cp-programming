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

    int t, n, i,j;
    string s;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int cnt1 = 200, cnt2 =200;
        for(i=0; i<n; i++){
            if(s[i]=='>') {
                cnt1 = i;
                break;
            }
        }
        for(i=n-1; i>=0; i--){
            if(s[i]=='<') {
                cnt2 = n - i - 1;
                break;
            }
        }
        cout<<min(cnt1, cnt2)<<endl;
    }
    return 0;

}
