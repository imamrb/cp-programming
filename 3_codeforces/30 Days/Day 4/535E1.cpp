#include<bits/stdc++.h>
using namespace std;


int main()
{

    int i, j, n, m, k, d, x ,y;

    cin>>n>>m;
    vector<int> v(n+1);
    vector<pair<int,int>>q(m);

    for(i=1; i<=n; i++){
        cin>>v[i];
    }
    for(i=0; i<m; i++){
        cin>>q[i].first>>q[i].second;
    }
    int ans = *max_element(v.begin()+1, v.end()) - *min_element(v.begin()+1, v.end());
    set<int> seg, res, res2;
    for(i=1; i<=n; i++){
        for(j=i+1; j<=n; j++){
            if(i!=j){
                res.clear();
                res2.clear();
                int tmp1 = max(v[i], v[j]);
                int tmp2 = min(v[i], v[j]);

                if(v[i]==tmp2) x = i, y =j;
                else x = j, y = i;

                int Max1 = tmp1, Min2 = tmp2;
                for(int t=0; t<m; t++){
                    if(x>=q[t].first && x<=q[t].second && (y>q[t].second || y<q[t].first)) { --tmp2; res.insert(t+1);}
                    d = max(tmp1, tmp2) - min(tmp1, tmp2);
                    if(d>ans){
                        ans = d;
                        seg = res;
                    }
                    if(y>=q[t].first && y<=q[t].second &&(x>q[t].second || x<q[t].first)) { --Max1; res2.insert(t+1);}
                    d = max(Max1, Min2) - min(Max1, Min2);
                    if(d>ans){
                        ans = d;
                        seg = res2;
                    }
                }

            }
        }
    }
    cout<<ans<<endl;
    cout<<seg.size()<<endl;
    for(auto it: seg) cout<<it<<" ";
    cout<<endl;
}
