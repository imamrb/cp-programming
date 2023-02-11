#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i, j, k;
    cin>>s;

    int l = s.length();

    int rb=1, cb=1, rh=4, ch=1;
    for(i=0; i<l; i++){
        if(s[i]=='0'){
            printf("%d %d\n", rb, cb);
            cb++;
            if(cb==5) cb = 1;
        }
        else{
            printf("%d %d\n", rh, ch);
            ch+=2;
            if(ch==5) ch = 1;
        }
    }
    return 0;
}
