#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, t;
    string g = "BGR";
    string p;
    vector<int> v;
    vector<string> arr;

    cin>>n>>p;
    do{
        string s = p;

        int cnt = 0;
        for(i=0; i<3; i++){
            for(j=i; j<n; j+=3){
                if(s[j]!=g[i]){
                    s[j] = g[i];
                    cnt++;
                }
            }
        }
        v.push_back(cnt);
        arr.push_back(s);
    }while(next_permutation(g.begin(), g.end()));

    int Min = min_element(v.begin(), v.end()) - v.begin();

    cout<<v[Min]<<endl;
    cout<<arr[Min]<<endl;

    return 0;
}
