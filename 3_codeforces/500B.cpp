#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int> > v;
    int n, m, i, x, y, q, r;

    cin>>n;
    for(i=0; i<n;i++){
        cin>>x;
        v.push_back(make_pair(x, i+1));
    }
    sort(v.begin(), v.end());

    int check = 0, check2 = 0;
    for(i=1; i<n; i++){
        if(v[i-1].first==v[i].first){
            x = i-1;
            y = i;
            check = 1;
            for(i=y+1; i<n; i++){
                if(v[i-1].first==v[i].first){
                    q = i -1;
                    r = i;
                    check2 = 1;
                    break;
                }
            }
            break;
        }
    }
    if(check==1 && check2==1){
        cout<<"YES"<<endl;
        for(i=0; i<n; i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
        swap(v[x], v[y]);
        for(i=0; i<n; i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
        swap(v[q], v[r]);
        for(i=0; i<n; i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;

    }
    else cout<<"NO"<<endl;

    return 0;
}
