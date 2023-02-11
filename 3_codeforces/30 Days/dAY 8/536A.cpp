#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define push_back pb;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const double pi=acos(-1);
int main()
{
    IOS;

    int n, i, j;
    string a, s[510];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a;
        s[i]+='y';
        s[i]+=a;
        s[i]+='y';
    }
    int cnt = 0;
    for(i=1; i<n-1; i++){
        for(j=2; j<n; j++){
            if(s[i][j]=='X'){
                if(s[i][j]=='X' && s[i-1][j-1]=='X' && s[i-1][j+1]=='X' && s[i+1][j-1]=='X' && s[i+1][j+1]=='X') cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}

