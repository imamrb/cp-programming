#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, l, temp;
    cin>>n;
    bitset<200000> bs;
    bs.set();
    string s, r;
    cin>>s;
    l = s.length();
    r = s;
    do{
        for(i=0; i<l; i++){
            if(s[i]=='D' && bs[i]==1){
                temp = r.find('R');
                if(temp==string::npos) continue;
                else{
                    r.erase(r.begin()+temp);
                    cout<<bs[temp]<<endl;
                    cout<<temp<<" "<<r<<endl;
                    bs[temp] = 0;
                    cout<<bs[temp]<<endl;
                }
            }
            else if(s[i]=='R' && bs[i]==1){
                temp = r.find('D');
                if(temp==string::npos) continue;
                else{
                    r.erase(r.begin()+temp);
                    cout<<temp<<" "<<r<<endl;
                    bs[temp] = 0;
                }
            }
        }
        bs.set();
        l = r.length();
        s = r;
        cout<<"S"<<s<<endl;
    }while(l>1);
//    cout<<r;
}
