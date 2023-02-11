#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    vector<long long int> k;
    string s;
    long long int n, t, i, km;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>t>>s;
        v.push_back(s);
        k.push_back(t);
    }
    long long int l = v.size();
    long long int check = 1;
    km = 0;
    string op = "South", p = "North";
    for(i=0; i<l-1; i++){
        if(v[i]==op) km+=k[i];
        else if(v[i]==p) km-=k[i];
        if((km==20000 || km==0) && v[i]=="North" && v[i+1]!="South"){
            check = 0;
            break;
        }
        else if((km==20000 || km==0)&& v[i]=="South" && v[i+1]!="North"){
            check = 0;
            break;
        }
        if(km>=20000) {swap(op, p); km-=20000;}
    }
    if(v[i]==op) km+=k[i];
    else if(v[i]==p) km-=k[i];
    if(km==20000) km = 0;
    if(v[0]!="South" || v[i]!="North" || km!=0) check = 0;

    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;

}
