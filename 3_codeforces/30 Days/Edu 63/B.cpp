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
    int i, j, n, l;
    string s;
    cin>>n;
    cin>>s;
    l = s.length();
    queue<int> p, v;

    for(i=0; i<l; i++){
        if(s[i]=='8') p.push(i);
        else v.push(i);
    }
    int mov = n - 11;
    int bit = 1;

    while(mov){
        if(bit && !v.empty()){
            int k = v.front();
            v.pop();
            s[k] = '*';
        }
        else{
            if(p.empty()){break;}
            int k = p.front();
            p.pop();
            s[k] = '*';
        }
        bit = !bit;
        --mov;
    }
    bool flag = false;
    for(i=0; i<n; i++){
        if(s[i]!='*'){
            if(s[i]=='8'){flag = true;}
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
