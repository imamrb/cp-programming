#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, d=0, can = 0, a;

    cin>>n>>k;

    int day = 0;
    for(int i=1; i<=n; i++){
        cin>>a;
        if(can<k){
            a+=d;
            if(a>8){
                can+=8;
                d = (a-8);
            }
            else {can+=a; d = 0;}
            if(can>=k) day = i;
        }
    }
    if(day) cout<<day<<endl;
    else cout<<-1<<endl;

    return 0;
}
