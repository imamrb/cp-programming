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

    map<string, int> mp;
    vector<string> v;

    int i, ans1, Min = 0, Max = 0;
    string s;

    for(i=0; i<3; i++){
        cin>>s;
        reverse(all(s));
        v.pb(s);
        mp[s]++;
        Max = max(Max, mp[s]);
    }
    ans1 = 3 - Max;
    sort(all(v));

    int one = 1, two = 0;
    for(i=0; i<2; i++){
        if(v[i][0]==v[i+1][0]){
            if(abs(v[i+1][1]-v[i][1]) == 1) one++;
            else if(abs(v[i+1][1]-v[i][1]) == 2) two++;
        }
    }
    Min = 3 - one;
    if(two){
        Min = min(Min, 1);
    }
    Min = min(ans1, Min);

    cout<<Min<<endl;

}
