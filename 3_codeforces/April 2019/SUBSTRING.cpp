/*  Imam Hossain Santho
    Noakhali Science & Technology University
*/
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
    LL t, n, i, j, total, c;
    string s, x;

    cin>>t;
    while(t--){
        cin>>n;
        cin>>s>>x;
        total = (n*(n+1))/2;
        c = 0;
        for(i=0; i<n; i++){
            if(s[i]!=x[0]) c++;
            else{
                LL ct = (c*(c+1))/2;
                total -= ct;
                c = 0;
            }
        }
        if(s[n-1]!=x[0]){
            LL ct = (c*(c+1))/2;
            total -= ct;
            c = 0;
        }
        cout<<total<<endl;
    }
    return 0;
}
