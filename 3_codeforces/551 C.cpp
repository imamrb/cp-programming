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
    int i,j, n, l;
    string s;
    cin>>n>>s;
    l = s.length();

    int op =0, cl = 0, d;

    for(i=0; i<l; i++){
        if(s[i]=='(') op++;
        else if(s[i]==')') cl++;
    }
    d = n/2;
    bool flag = true;

    if(n%2 || op>d || cl>d) flag = false;
    else{
        op = d - op;
        cl = d - cl;
        for(i=0; i<l && op>0; i++){
            if(s[i]=='?') { s[i] = '('; --op; }
        }
        for(i=l-1; i>0 && cl>0; i--){
            if(s[i]=='?') { s[i] = ')'; --cl; }
        }
        op = 0; cl = 0;
        for(i=0; i<l; i++){
            if(s[i]=='(') op++;
            else if(s[i]==')') cl++;
            if(cl>=op && i<l-1) {flag = false; break; }
        }
    }
    if(flag) cout<<s<<endl;
    else cout<<":("<<endl;

    return 0;

}
