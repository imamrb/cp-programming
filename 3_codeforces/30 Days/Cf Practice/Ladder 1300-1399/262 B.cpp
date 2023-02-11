#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e9
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

LL cpow(LL s, LL a){
    LL p =1 ;
    if(a==1) return s;
    else{
        for(LL i=1; i<=a; i++){
            p*=s;
        }
        return p;
    }
}
LL digitSum(LL x){
    LL sum = 0;
    while(x>0){
        sum += x%10;
        x/=10;
    }
    return sum;
}
int main()
{
    IOS;

    LL n, a, b, c, s, x, sum;

    while(cin>>a>>b>>c){
        vector<int> ans;
        for(s=1; s<82; s++){
            x = b*cpow(s, a) + c;
            sum = digitSum(x);
            if(s==sum && x>0 && x<MAX){
                ans.pb(x);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it: ans) cout<<it<<" "; cout<<endl;
    }
    return 0;
}
