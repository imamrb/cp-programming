#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define PI               acos(-1.0)
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j, ans, t;
    string s;

    cin>>t;

    while(t--){
        cin>>n;
        int c  =0, o = 0, d = 0, e = 0, h = 0, f = 0;
        for(i=0; i<n; i++){
            cin>>s;
            int l = s.length();
            for(j=0; j<l; j++){
                if(s[j]=='c') c++;
                else if(s[j]=='o') o++;
                else if(s[j]=='d') d++;
                else if(s[j]=='e') e++;
                else if(s[j]=='h') h++;
                else if(s[j]=='f') f++;
            }
        }
        ans = min(c/2, min(e/2, min(o, min(d, min(h, f)))));

        cout<<ans<<endl;
    }
    return 0;
}
