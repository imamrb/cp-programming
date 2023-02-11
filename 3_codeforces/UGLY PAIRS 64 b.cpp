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
    int n, t, i, j;
    string s;

    cin>>t;
    while(t--){
        cin>>s;
        int l = s.length();
        sort(all(s));

        string ans, rem;
        ans += s[0];
        int len = 1;
        for(i=1; i<l; i++){
            if(abs(s[i] - ans[len-1])!=1){
                ans += s[i];
                ++len;
                while(i<n-1 && s[i]==s[i+1]) {
                    ans += s[i+1];
                    ++i;
                    ++len;
                }
            }
            else {
                rem += s[i];
                while(i<n-1 && s[i]==s[i+1]) {
                    rem += s[i+1];
                    ++i;
                }
            }
        }

        int ll = ans.size();
        int rr = rem.size();

        bool flag = true;

        if(abs(ans[ll-1] - rem[0])!=1){
            ans += rem;
        }
        else if(abs(ans[ll-1] - rem[rr-1])!=1){
            sort(rall(rem));
            ans += rem;
        }
        else if(abs(ans[0] - rem[0])!=1){
            sort(rall(rem));
            rem += ans;
            ans = rem;
        }
        else if(abs(ans[0] - rem[rr-1])!=1){
            rem += ans;
            ans = rem;
        }
        else flag = false;

        if(flag) cout<<ans<<endl;
        else cout<<"No answer"<<endl;
    }

    return 0;

}
