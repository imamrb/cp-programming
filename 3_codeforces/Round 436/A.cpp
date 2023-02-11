#include<bits/stdc++.h>
using namespace std;

int Count(string a, string b){
    int ct = 0;
    size_t nPos = a.find(b, 0); // fist occurrence
    while(nPos != string::npos)
    {
        ct++;
        nPos = a.find(b, nPos+1);
    }
    return ct;
}
int main()
{
    string s, b;
    int cnt = 0;

    cin>>s;
    b = "Danil";
    cnt += Count(s,b);
    b = "Olya";
    cnt+= Count(s,b);
    b = "Slava";
    cnt+= Count(s,b);
    b = "Ann";
    cnt += Count(s,b);
    b = "Nikita";
    cnt += Count(s,b);

    if(cnt==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
