#include<bits/stdc++.h>
using namespace std;

int arr[150010]={0};

int main()
{
    int n, m, i, a, b;
    vector< pair<int, int> > v;
    cin>>n>>m;

    for(i=0; i<m; i++){
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
        v.push_back(make_pair(a,b));
    }
    bool flag = true;
    for(i=0; i<m; i++){
        if(arr[v[i].first]!=arr[v[i].second]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
