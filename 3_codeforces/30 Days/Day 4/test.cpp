#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    for(int i=0; i<5; i++) cin>>v[i];

    int tmp = max_element(v[3], v[4]) - v.begin();
    cout<<tmp<<endl;
}
