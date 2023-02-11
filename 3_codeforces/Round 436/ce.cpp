#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int>v[30];
    int ls, l, i, j;

    cin>>s;
    ls = s.length();
    for(i=0; i<l; i++){
        int a = s[i]-97;
        v[a].push_back(i);
    }
    int ans = l, d;
    for(i=0; i<27; i++){
        l = v[i].size();
        if(l>0){
            d = 0;
            if(l<2) {d = max(d, (max(v[i][0], ls-v[i][0])));}
            else{
                for(j=0; j<l-1; j++){
                    d = max(d, v[i][j+1]-v[i][j]);
                }
                d = max(d, ls-v[i][j]);
            }
            ans = min(ans, d);
        }
    }
    cout<<ans<<endl;
    return 0;
}
