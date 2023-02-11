#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[5010]={0}, arb[5010]={0};
    string s;
    int i, j, k, cnt = 0;

    cin>>s;
    int l = s.length();
    for(j=l-1; j>=0; j--){
        if(s[j]=='a') cnt++;
        else break;
    }
    for(i=0; i<j; i++){
        if(s[i]=='a') cnt++;
        else break;
    }
    for(k=j; k>=i; k--){
        if(s[k]=='a') ara[k]++;
        else arb[k]++;
    }
    char c='b';
    if(s[i]=='b' && ara[i+1]>arb[i+1]){
            c = 'a';
    }
    int check = 0;
    for( ; i<=j; i++){

        if(s[i]=='b' && ara[i+1]>arb[i+1]){
            c = 'a';
            cnt++;
        }
        else if(s[i]=='a' && ara[i+1]<arb[i+1] && check == 0){
            c = 'b';
            c++;
        }
        if(s[i]==c) {
                cnt++;
                if(c=='b') check = 1;
        }

    }
    cout<<cnt<<endl;
    return 0;
}
