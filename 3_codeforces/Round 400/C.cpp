#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string s;
    int n, k, i;

    for(char c=65; c<91; c++){
        s = c;
        v.push_back(s);
        s +=(c+32);
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    cin>>n>>k;
    int  m = n-k+1;
    for(i=0; i<m; i++){
        cin>>s;
        if(s=="NO" && v[i]!=v[i+1]){
            v[i+] = v[i];
        }
    }
    for(i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
