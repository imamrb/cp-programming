#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, t="RBYG", p="RBYG";
    int arr[5]={0};
    int i, j;

    cin>>s;
    for(i=0; i<4; i++){
        int check = 0;
        for(j=i; j<s.size(); j+=4){
            if(s[j]=='!'){
                arr[i]++;
            }
            else if(!check){
                t[i]=s[j];
                check = 1;
            }
        }
    }
    for(char c: p){
        for(i=0; i<t.size(); i++){
            if(c==t[i]){
                cout<<arr[i]<<" ";
            }
        }
    }
    cout<<endl;

    return 0;

}
