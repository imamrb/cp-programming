#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    char a, b;
    set<pair<char, char> > S;
    int i, j, l;

    cin>>s>>t;
    l = s.length();
    for(i=0; i<l; i++){
        if(s[i]!=t[i]){
            if(s[i]>t[i]) b = s[i], a = t[i];
            else a = s[i], b = t[i];
            S.insert(make_pair(a,b));
        }
    }
    for(i=0; i<l; i++){
        for(set<pair<char, char> >::const_iterator it = S.begin(); it != S.end(); it++){
            a = it->first, b = it->second;
            if(t[i]==a){t[i]=b; break;}
            else if(t[i]==b){t[i]=a; break;}
        }
    }
    if(t==s){
        l = S.size();
        cout<<l<<endl;
        for(set<pair<char, char> >::const_iterator it = S.begin(); it != S.end(); it++){
            cout<< it->first <<" "<< it->second <<endl;
        }
    }
    else cout<<"-1"<<endl;

    return 0;
}
