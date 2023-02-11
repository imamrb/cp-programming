#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()

bool cmp(pair<string, int>a, pair<string, int> b){
    return a.second<b.second;
}
int main()
{
    map<string, int> mymap{{"Santho", 48}, {"Shawon", 25}, {"Shuvo", 32}, {"Akid", 33}};
    mymap.insert({"Moshiur",53});
    for(auto it: mymap) cout<<it.first<<" "<<it.second<<endl;

    vector<pair<string, int> > v(all(mymap));

    sort(all(v), cmp);
    cout<<endl;
    for(auto it: v) cout<<it.first<<" "<<it.second<<endl;

    return 0;
}
