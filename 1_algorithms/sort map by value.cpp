#include<bits/stdc++.h>
using namespace std;
#define all(c) c.begin(), c.end()
typedef pair<string , int> psi;

bool cmp(psi &a, psi &b){
    return a.second<b.second;
}
int main()
{
    map<string, int> mymap{{"Santho", 48}, {"Shawon", 25}, {"Shuvo", 32}, {"Akid", 33}};
    mymap.insert({"Moshiur",53});

    cout<<"Map is sorted by keys:\n"<<endl;
    for(auto it: mymap) cout<<it.first<<" "<<it.second<<endl;

    cout<<endl<<"Now we sort it using values:\n"<<endl;

    vector<psi> v(all(mymap)); //copy map to a vector
    sort(all(v), cmp); //sort vector using cmp function

    for(auto it: v) cout<<it.first<<" "<<it.second<<endl;

    return 0;
}
