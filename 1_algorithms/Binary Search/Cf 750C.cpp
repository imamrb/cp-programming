#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v;
int n;
int lo, hi, mid, ans, save=-1;
int can(int rating){
    for(int i=0; i<n; i++){
        if(v[i].second==1 && rating<1900){ lo = mid+1; return 0;}
        else if(v[i].second==2 && rating>1899){hi = mid-1; return 0;}
        rating += v[i].first;
    }
    return rating;
}
int main()
{
    cin>>n;
    int flag = 0, c, d, i;
    for(i=0; i<n; i++){
        cin>>c>>d;
        v.push_back(make_pair(c,d));
        if(d==2) flag = 1;

    }
    if(flag== 0) cout<<"Infinity"<<endl;

    else{
        if(v[0].second==1) { lo = 1900; hi = 2e8; }
        else{ lo = -2e8; hi = 1899;}
          while(lo<=hi){
           mid = (lo+hi)/2;
           ans = can(mid);
           if(ans){
             save = ans;
             lo = mid+1;
           }
        }
        if(save==-1) cout<<"Impossible"<<endl;
        else cout<<save<<endl;
    }

    return 0;
}
