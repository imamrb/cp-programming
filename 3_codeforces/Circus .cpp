#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;
vector<int> v[5];

void print(int a, int t){
    for(int i=0; i<a; i++){
        cout<<v[t][i]<<" ";
    }
}
int main()
{
    IOS;
    int n, i, j, a, b, c, d;
    string s1, s2;

    cin>>n;
    cin>>s1>>s2;

    for(i=0; i<n; i++){
        if(s1[i]=='0' && s2[i]=='0') v[0].pb(i+1);
        else if(s1[i]=='0' && s2[i]=='1') v[1].pb(i+1);
        else if(s1[i]=='1' && s2[i]=='0') v[2].pb(i+1);
        else v[3].pb(i+1);
    }
    a = v[0].size(); b = v[1].size(); c = v[2].size(); d=v[3].size();
    int m = n/2;
    bool flag = false;
    int dr, da, clown, acro;
    for(i=0; i<=b; i++){
        for(j=0; j<=c; j++){
            dr = (b + d) - (i+j);
            dr/=2;
            da = m - (i+j+dr);
            clown = j + dr;
            acro =  (b - i) + (d - dr);
            if(da<0 || dr<0) continue;
            if(clown==acro){
                clown = clown+da+i;
                acro = acro + a - da + c - j;
                if(clown==acro && clown+acro==n){
                       if(da<=a && i<=b && j<=c && dr<=d){
                             flag = true;
                             break;
                       }
                }
            }
        }
        if(flag) break;
    }
    if(flag==false) cout<<"-1"<<endl;
    else{
        print(da, 0);
        print(i, 1);
        print(j, 2);
        print(dr, 3);
    }
}
