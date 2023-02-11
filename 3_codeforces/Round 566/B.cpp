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

int h, w;
vector<string> v;

int check(int i, int j){
    if(v[i][j+1]=='*' && v[i][j-1]=='*' && v[i+1][j]=='*' && v[i-1][j]=='*'){
        bool flag = true;
        for(int k=i-1; k>=0; k--){
            if(v[k][j]=='*'){
               if(flag) v[k][j] = '.';
               else return -1;
            }
            else flag = false;
        }
        flag = true;
        for(int k=i+1; k<h; k++){
            if(v[k][j]=='*'){
               if(flag) v[k][j] = '.';
               else return -1;
            }
            else flag = false;
        }
        flag = true;
        for(int k=j-1; k>=0; k--){
            if(v[i][k]=='*'){
               if(flag) v[i][k] = '.';
               else return -1;
            }
            else flag = false;
        }
        flag = true;
        for(int k=j; k<w; k++){
            if(v[i][k]=='*'){
               if(flag) v[i][k] = '.';
               else return -1;
            }
            else flag = false;
        }
        return 1;
    }
    return 0;
}
int main()
{
    IOS;


    int i, j;
    string s;

    cin>>h>>w;

    for(i=0; i<h; i++){
        cin>>s;
        v.pb(s);
    }
    if(h<3 || w<3) {cout<<"NO"<<endl; return 0; }
    bool flag = false;
    for(i=1; i<h-1; i++){
        for(j=1; j<w-1; j++){
            if(v[i][j]=='*'){
                int ans = check(i, j);
                if(ans==1){
                    if(flag==false) flag = true;
                    else {cout<<"NO"<<endl; return 0;}
                }
                else if(ans==-1) {cout<<"NO"<<endl; return 0;}
            }
        }
    }
    for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            if(v[i][j]=='*') {cout<<"NO"<<endl; return 0;}
        }
    }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
