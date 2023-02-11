#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, m, k, i, j, v;
    bool flag = false;
    cin>>n>>m;

    for(i=0; i<m; i++){
        scanf("%d", &k);
        vector<int> s;
        for(j=0; j<k; j++){
            scanf("%d", &v);
            s.push_back(v);
        }
        if(!flag){
            int l = s.size();
            bool check = true;
            for(j=0; j<l; j++){
               if(find(s.begin(), s.end(), -s[j])!=s.end()){
                        check = false;
                        break;
               }
            }
            if(check) flag = true;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
