#include<bits/stdc++.h>
using namespace std;
const long double PI = acos(-1);
int main()
{
  int n , R;
  cin>>n>>R;
  cout<<fixed<<setprecision(7)<<R*sin(PI / n) / (1 - sin(PI / n));
}
