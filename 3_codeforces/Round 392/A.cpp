#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, a;

    cin>>n;
    while(n--){
        cin>>a;
        v.push_back(a);

    }
    int total = 0;
    int Max = *max_element(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        total += (Max-v[i]);
    }
    cout<<total<<endl;
    return 0;
}
