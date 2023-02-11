#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define rsort(x) x.begin(), x.end(), greater<int>()
using namespace std;

const double pi = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout<<"\nPrint Using iterator"<<endl;
    for(vector< int >::iterator it = v.begin(); it != v.end(); it++) cout<<*it<<" ";
    cout<<"\nUsing auto iterator"<<endl;
    for(auto it: v) cout<<it<<" ";

    cout<<"\nSorting usring macro"<<endl;
    sort(all(v));
    for(auto it: v) cout<<it+1<<" ";
    cout<<"\nReverse sorting using macro"<<endl;
    sort(rsort(v));
    for(auto it: v) cout<<it<<" ";
    cout<<endl;

    map<string, int> mymap{{"Santho", 48}, {"Shawon", 25}, {"Shuvo", 32}, {"Akid", 33}};
    cout<<"Map store the elements in the sorted order of keys: "<<endl;
    for(auto it: mymap) {
        cout<<it.first<<endl;
    }
    cout<<endl;
    for(auto it=mymap.begin(); it!=mymap.end(); it++){
        cout<<(*it).second<<endl;
    }
}
