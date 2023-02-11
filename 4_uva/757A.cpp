#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> mp;

    string t = "Bulbasaur";
    for(char c : t) mp[c]=0;
    string s;
    cin>>s;
    for(char c : s) mp[c]++;
    mp['u']/=2; mp['a']/=2;
    int Min = s.size();
    for(auto p : mp){
        Min = min(Min, p.second);
    }
    cout<<Min<<endl;

    return 0;
}
