#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, s, t;
    int l, i, L;

    cin>>a>>b;

    l = b.size();
    L = a.size();
    int f = 0;
    int check = 0, check2=0, check3=0;
    for(i=0; i<l; i++){
        if(a.find(b[i], f)!=string::npos){
           f = a.find(b[i], f) + 1;
           s += b[i];
           if(check==1) check2 = 1;
           if(check3==1) {cout<<t<<endl; return 0;}
        }
        else if(check2==1) check3 = 1;
        else{
            check = 1;
            t = s;
        }
    }
    if(!s.empty()) cout<<s<<endl;
    else cout<<"-"<<endl;

    return 0;
}
