#include<bits/stdc++.h>
using namespace std;
int lo, hi, total, c, d, n, cr, v, i, ans;
bool can(int mid){
    if(v==2){
        if((mid-c)<=1899){ cout<<"2   "<<mid<<endl; return true;}
        else return false;
    }
    else if(mid<=(1899+c)){ cout<<"1   "<<mid<<endl; return true;}
    else return false;
}
int main()
{
    int mid=0;

    cin>>n;
    cin>>c>>d;

    int ans=1900;
    for(i=1; i<n; i++){
        cin>>cr>>v;
        if(d==v) { c+=cr; continue;}
        if(c<0) { lo = 1e-9; hi = ans-1;}
        else{ hi = 1e9; lo = ans;}

        while(lo<hi){
           mid = (lo+hi)/2;
           if(can(mid)){
                ans = mid;
                cout<<ans<<endl;
                lo = mid+1;
           }
           else { hi = mid;}
        }
        c = cr;
        d = v;
    }
    ans+=c;

    cout<<ans<<endl;

    return 0;
}
