#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, a, b, i, m;

    cin>>T;

    while(T--){
        vector<int> v(1010, 0);
        set<int> p;
        cin>>n;
        for(i=1; i<n; i++){
            cin>>a>>b;
            p.insert(a);
            v[b]=1;
        }
        for(set<int>::const_iterator it =p.begin(); it!=p.end(); it++){
            m = *it;
            if(v[m]>0) v[m]++;
        }
        int cnt = 0;
        for(i=0; i<v.size(); i++){
            if(v[i]==1) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
