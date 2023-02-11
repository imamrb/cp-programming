#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pi;
typedef pair<pi, int> pii;
int main()
{
    int T, n, i, j;

    cin>>T;
    while(T--){
        cin>>n;
        vector<pii> v(n);
        for(i=0; i<n; i++) {
                cin>>v[i].first.first>>v[i].first.second;
                v[i].second= i;
        }
        sort(v.begin(), v.end());
        int flag = 0;
        int arr[n] = {0};

        arr[v[0].second] = 1;
        int Max = v[0].first.second;
        for(i=1; i<n; i++){
            if(Max<v[i].first.first) {flag=i; break;}
            else {
                    Max = max(Max,v[i].first.second);
                    arr[v[i].second] = 1;
            }
        }
        if(flag==0) cout<<-1<<endl;
        else{
            for(i=0; i<n; i++){
                if(arr[i]==1) cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
