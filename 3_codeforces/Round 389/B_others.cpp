#include<bits/stdc++.h>
using namespace std;
const int MX = (1<<20);
int which[MX];
string str;
int main(){
    string str1 , str2;
    cin>>str1>>str2;
    for(int j = 0 ; j < str1.size() ; j++){
        if( (which[str1[j]] && which[str1[j]] != str2[j]) || (which[str2[j]] && which[str2[j]] != str1[j])){
            puts("-1");
            return 0;
        }
        which[str1[j]] = str2[j];
        which[str2[j]] = str1[j];
    }
    set < pair < char , char > > sol;
    for(int j = 'a' ; j <= 'z' ; j++){
        if(!which[j] || which[j] == j) continue;
        sol.insert({min(j , which[j]) , max(j , which[j])});

    }
    cout<<sol.size()<<endl;
    for(auto pp : sol) cout<<pp.first<<' '<<pp.second<<endl;
}
