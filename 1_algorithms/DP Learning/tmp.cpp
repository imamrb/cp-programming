#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define ll long long
//priority_queue <int, vector<int>, greater<int> > pq; //min heap
using namespace std;




int main()
{
    IOS
    int x,n,y,ans=0;
    cin>>n>>x>>y;
    string str;

      cin>>str;


  bool flg=false;
  int kep=n-y-1;
  if(str[n-y-1]=='0')
    {
        ans++;
    str[n-y-1]='1';
    flg=true;
    }
     n--;
 for(int i=1;i<=x;i++)
 {
     if(kep==n)
     {
         n--;
         continue;
     }
     if(str[n]=='1')
        ans++;
        n--;
 }


    cout<<ans<<endl;
}
