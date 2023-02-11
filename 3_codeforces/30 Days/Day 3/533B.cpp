#include<bits/stdc++.h>
using namespace std;

int main()
{
    printf("%lf", (double)1e-3);
    int n, k, i;
    string s, tmp;
    cin>>n>>k;
    cin>>s;
    map<string, int> mymap;
    for(i=0; i<n; i++){
        string tmp;
        tmp+=s[i];
        int len = 1;
        while(len<k && i<n-1){
            if(s[i]==s[i+1]) {
                    tmp+=s[i+1];
                    i++;
                    len++;
            }
            else break;
        }
        if(s[i]==s[i+1] && len<k) {tmp+=s[i+1]; len++; i++; }
        if(len==k) {
            if(mymap.find(tmp)!=mymap.end()) mymap[tmp]++;
            else mymap[tmp] = 1;
        }
    }
    int Max = 0;
    for(auto it=mymap.begin(); it!=mymap.end(); it++){
        Max = max(Max, it->second);
    }

    cout<<Max<<endl;
}
