#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-9
vector< pair<int, string> > events;
vector<double> liter;

bool can(double f){
    int s = events.size();
    int j = 0;
    double rate=0.0, leak=0.0, dis=0.0, flag=0;
    double cap = f;

    for(int i=0; i<s; i++){
        int index = events[i].first;
        string s = events[i].second;
        dis = index - flag;
        cap = cap - (dis*rate) - (leak*dis);
        flag = index;
        if(cap<0.0) return false;
        if(s=="Fuel"){
            rate = liter[j]/100.00;
            j++;
        }
        else if(s=="Leak") leak+=1.0;
        else if(s=="Mechanic") leak = 0.0;
        else if(s=="Gas") cap = f;
    }
    if(cap>=0.0) return true;
    else return false;
}
int main()
{
    string s;

    int d;
    double t;
    while(1){
        cin>>d>>s;
        events.push_back(make_pair(d, s));

        if(s=="Fuel"){
            cin>>s>>t;
            if(d==0 && t==0.0) return 0;;
            liter.push_back(t);
        }
        else if(s=="Gas") cin>>s;
        else if(s=="Goal"){
            double lo=0.0, hi=10000.0, mid = 0.0, ans = 0.0;
            while(fabs(hi-lo)>EPS){
                mid = (lo+hi)/2.0;
                if(can(mid)){
                    ans = mid;
                    hi = mid;
                }
                else lo = mid;
            }
            printf("%.3lf\n", ans);
            events.clear();
            liter.clear();
        }
    }
}
