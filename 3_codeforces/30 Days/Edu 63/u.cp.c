#include<bits/stdc++.h>
#define mp long long
#define ty 57654
#define mi 65767
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int pos_h=-1,pos_l=-1;

    int mx = 0;

    for(int i=0;s[i];i++){
        if(s[i]>mx){
            int v = s[i];
            mx = max(mx,v);
            pos_l = i;
        }
        if(s[i]<mx){
            pos_h = i;
            break;
        }
    }
    if(pos_h!=-1 && pos_l!=-1){
        cout<<"YES"<<endl;
        cout<<pos_l+1<<" "<<pos_h+1<<endl;
    }
    else cout<<"NO"<<endl;

}
