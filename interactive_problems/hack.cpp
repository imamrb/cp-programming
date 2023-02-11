#include<bits/stdc++.h>
#define pb push_back
#define LL long long
using namespace std;
int main()
{
    map<int, pair<int,int> >mp;

    int ara[6];
    ara[0] = 4;
    ara[1] = 8;
    ara[2] = 15;
    ara[3] = 16;
    ara[4] = 23;
    ara[5] = 42;

    vector<int>v[1000],v_r[1000];
    int idx = 0;

    do{

      for(int i=0;i<6;i++){
        v[idx].pb(ara[i]);
      }

      int a = ara[0]*ara[1]; v_r[idx].pb(a);
      int b = ara[1] * ara[2]; v_r[idx].pb(b);
      int c = ara[2] * ara[3]; v_r[idx].pb(c);
      int d = ara[3] * ara[4]; v_r[idx].pb(d);
     idx++;
    }while(next_permutation(ara,ara+6));

    int a;
    cout<<"? 1 2"<<endl; fflush(stdout);
    cin>>a;

    int b;
    cout<<"? 2 3"<<endl; fflush(stdout);
    cin>>b;

    int c;
    cout<<"? 3 4"<<endl; fflush(stdout);
    cin>>c;

    int d;
    cout<<"? 4 5"<<endl; fflush(stdout);
    cin>>d;

    vector<int>temp;
    temp.pb(a);
    temp.pb(b);
    temp.pb(c);
    temp.pb(d);

    for(int i=0;i<800;i++){
        if(temp==v_r[i]){
              printf("! %d %d %d %d %d %d\n",v[i][0],v[i][1],v[i][2],v[i][3],v[i][4],v[i][5]); fflush(stdout);
              return 0;
        }
    }

}
