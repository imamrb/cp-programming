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
    vector<pair<double, int> > v;


    int i, j, k;
    while(1){
        string s1, s, s2;
        cin>>s;
        if(s=="0") break;
        bool flag = true;
        int l = s.length();
        for(int i=0; i<l; i++){
            if(s[i]=='[') flag = false;
            if(flag) s1+=s[i];
            else if(s[i]!='[' && s[i]!=']') s2 += s[i];
        }
        int n = stoi(s1);
        double d = stod(s2);

        v.pb({d, n});
    }
    sort(rall(v));
    int cnt = 0;
    for(auto it: v){
        cnt++;
       cout<<setprecision(3)<<setw(4)<<it.first<<" "<<it.second<<"\t";
       if(cnt%5==0) cout<<endl;
    }
}
