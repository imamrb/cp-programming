#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,l,r,x,a, ch, br, i, j;
    vector<int> v;

    cin>>n>>m;

    v.push_back(0);
    for(i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
    }
    for(i=0; i<m; i++){
        cin>>l>>r>>x;
        br = 0, ch = 0;
        for(j=l; j<x; j++){
            if(v[j]<v[x]) ch++;
            if(v[j]>v[x]) br++;
        }
        for(j=r; j>x; j--){
            if(v[j]<v[x]) ch++;
            if(v[j]>v[x]) br++;
        }
        if(l+ch==x && r-br == x) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;

}
