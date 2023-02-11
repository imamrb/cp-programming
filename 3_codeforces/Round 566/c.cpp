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
bool vowel(char ch){
 if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
 else return false;
}
int main()
{
    IOS;
    int i, j, n;

    vector<string> v;
    string s;
    cin>>n;
    vector<pair<char, int> > rc;

    for(i=0; i<n; i++){
        cin>>s;
        int l = s.length();
        int cnt = 0; char last;
        for(j=0; j<l; j++){
            if(vowel(s[j])){ cnt++; last = s[j]; }
        }
        rc.pb({last, cnt});
    }
    sort(all(rc));

    for(auto it: rc) cout<<it.first<<" "<<it.second<<endl;

}
