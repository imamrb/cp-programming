#include<bits/stdc++.h>
using namespace std;
#define not_found std:string:npos
int main()
{
    string s;
    int i, j, k;

    cin>>s;
    int len = s.length();
    int ans = 0;
    int open = s.find('[');
    if(open!= -1 ){
        int found1 = s.find(':', open+1);

        if(found1!=-1){
            string s2 = s;
            reverse(s2.begin(), s2.end());
            int close = s2.find(']');
            int found2 = s2.find(':', close+1);
            if(close != -1 && found2!=-1){
                close = (len-close-1);
                if(close>open){
                    found2 = len-found2-1;
                    if(found2>found1){
                        ans+= 4;
                        for(i=found1+1; i<found2; i++){
                            if(s[i]=='|') ans++;
                        }
                    }
                }
            }
        }
    }
    if(ans==0) cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}
