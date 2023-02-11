#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, a, b, c;


    while(cin>>n>>m){
        vector<int> v[22];
        if(n==0 && m==0) break;
        for(i=0; i<m; i++){
            cin>>a>>b>>c;
            v[i].push_back(a);
            v[i].push_back(b);
            v[i].push_back(c);
        }
        vector<int> p(n);
        for(i=0; i<n; i++){
            p[i]=i;
        }
        int C = 0;
        do{
            bool check = 0;
            for(i=0; i<m; i++){
               a = (find(p.begin(), p.end(), v[i][0])) - p.begin();
               b = (find(p.begin(), p.end(), v[i][1])) - p.begin();
               if(v[i][2]>0) {
                    if(abs(a-b) > v[i][2]) {check = 1; break;}
               }
               else {
                    if(abs(a-b) < abs(v[i][2])) {check = 1; break;}
               }
            }
            if(!check) C++;
        }while(next_permutation(p.begin(), p.begin()+n));

        cout<<C<<endl;
    }
    return 0;
}
