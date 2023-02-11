#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector< pair<int, string> > v;
    int a, b, c, n, i, m;
    string s;
    cin>>a>>b>>c>>m;

    int x = 0, y=0, z=0, total = 0;

    for(i=0; i<m; i++){
        cin>>n>>s;
        v.push_back(make_pair(n, s));
    }
    sort(v.begin(), v.end());
    int l = v.size();
    for(i=0; i<l; i++){
        if(v[i].second=="USB"){
            x++;
        }
        else if(v[i].second=="PS/2"){
            y++;
        }
    }
    a = min(x, a);
    b = min(y, b);
    x = 0; y = 0;
    total = a+b;
    long long cost = 0;
    for(i=0; i<l; i++){
        if(x<a && v[i].second=="USB"){
            cost+=v[i].first;
            x++;
        }
        else if(y<b && v[i].second=="PS/2"){
            cost+=v[i].first;
            y++;
        }
        else if(z<c){
            cost+=v[i].first;
            z++;
            total++;

        }
    }
    cout<<total<<" "<<cost<<endl;
 }
