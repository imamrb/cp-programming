#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int vowel(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u') return 1;
    else return 0;
}
int main()
{
    IOS;

    int n, i, j;
    string s, t;
    cin>>s;
    cin>>t;
    int l = s.length();
    bool flag = true;
    if(s.length()!=t.length()) {flag=false;}
    else{
        for(i=0; i<l; i++){
            if(vowel(s[i])!=vowel(t[i])) {flag = false; break;}
        }
    }
    if(flag==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}
