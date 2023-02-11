#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
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

int main()
{
    IOS;
    int n, i, j;
    string s;

    cin>>s;


    n = s.length();
    char Max = s[0];
    char Min = s[0];
    cout<<"Mike"<<endl;
    for(i=1; i<n; i++){
        Min = min(Min, s[i]);
        if( Min<s[i]){
            cout<<"Ann"<<endl;
        }
        else cout<<"Mike"<<endl;
    }

    return 0;


}
