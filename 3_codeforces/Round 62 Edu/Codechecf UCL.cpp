#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;
typedef pair<string, pi> psii;

bool cmp(psii &a, psii &b){
    if(a.second.first==b.second.first)
        return a.second.second>b.second.second;
    else return a.second.first>b.second.first;
}
int main()
{
    IOS;
    int t, i, j, n, ag, hg;
    map<string, pair<int, int> > mp;

    cin>>t;
    string hm, aw, s;
    while(t--){
        for(i=0; i<12; i++){
            cin>>hm>>hg>>s>>ag>>aw;
            int score1=0, diff1=0, score2=0, diff2=0;
            for(auto it: mp){
                if(it.first == hm){
                    score1 = it.second.first;
                    diff1 = it.second.second;
                }
                else if(it.first == aw){
                    score2 = it.second.first;
                    diff2 = it.second.second;
                }
            }
            if(hg>ag) {score1+=3; diff1+=(hg-ag); diff2+=(ag-hg);}
            else if(ag>hg) {score2+=3; diff2+=(ag-hg); diff1+=(hg-ag);}
            else {score1+=1; score2+=1; }

            mp[hm] = {score1, diff1};
            mp[aw] = {score2, diff2};
        }
        vector<psii> v(all(mp));

        sort(all(v), cmp);
//
//        for(auto it: v){
//            cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
//        }
        cout<<v[0].first<<" "<<v[1].first<<endl;

        mp.clear();
        v.clear();
    }
    return 0;
}
