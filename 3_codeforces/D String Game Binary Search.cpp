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

int l, len;
string t, p;
vector<int>rec(MAX);

bool check(int m){
    bool flag = false;
    int i, j = 0;
    for(i=0; i<l; i++){
        if(rec[i+1]>m && t[i]==p[j]) j++;
        if(j==len){
            flag = true;
            break;
        }
    }
    return flag;

}
int main()
{
    IOS;
    int n, i, j, k, a;
    cin>>t>>p;
    l = t.length();
    len = p.length();
    for(i=0; i<l; i++){
        cin>>a;
        rec[a] = i+1;
    }
    bool flag;
    int lo = 1, hi = l, mid, ans = 0;
    while(lo<=hi){
        mid = lo + (hi-lo)/2;
        flag = check(mid);
        if(flag){
            ans = mid;
            lo = mid +1;
        }
        else hi = mid - 1;
    }

    cout<<ans<<endl;
}
