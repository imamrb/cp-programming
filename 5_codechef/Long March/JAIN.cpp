#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;

map<string, LL> mymap;
string vowel = "aeiou";

LL Count(string kh, string ah){
    LL l = kh.length();
    LL cnt = 0;
    for(auto it: mymap){
        string s = it.first;
        if(mymap[s]==0) continue;
        bool flag = true;
        for(LL i=0; i<l; i++){
            if(s.find(kh[i])==string::npos){
                flag = false;
                break;
            }
        }
        if(flag==true) cnt+=(mymap[s]*mymap[ah]);
    }
    mymap[ah] = 0;
    return cnt;
}
int main()
{
    IOS;
    LL T, N, i, j, n;
    set<pair<string, string> > khoj;

    cin>>T;
    while(T--){
        cin>>N;
        for(n=0; n<N; n++){
            string s;
            set<char> st;
            cin>>s;
            LL l = s.length();
            for(i=0; i<l; i++) st.insert(s[i]);
            string nai, ache;
            for(i=0; i<5; i++){
                if(st.find(vowel[i])==st.end()) nai+=vowel[i];
                else ache+=vowel[i];
            }
            khoj.insert({nai, ache});
            mymap[ache]++;
            st.clear();
        }
        LL total = 0;
        for(auto it: khoj){
            string kh = it.first;
            string ah = it.second;
            if(kh==""){
                LL x = mymap[ah];
                total += ((x*(N-x)) + ((x*(x-1LL))/2LL));
                mymap[ah] = 0;
            }
            else total += Count(kh, ah);
        }
        cout<<total<<endl;
        for(auto it: mymap){string s=it.first; mymap[s]=0; }
        khoj.clear();
    }
    return 0;
}
