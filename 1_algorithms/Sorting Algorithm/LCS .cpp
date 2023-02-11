#include<bits/stdc++.h>
using namespace std;

int lcs( string X, string Y, int m, int n )
{
   if (m == 0 || n == 0) return 0;
   if ( (X[m] == Y[n]) && (m>0&&n>0) )
     return 1 + lcs(X, Y, m-1, n-1);
   else
     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}
int main()
{
  string X,Y; cin>>X>>Y;
  int m = X.size(); int n = Y.size();
  cout<<endl<<"Length of LCS is = "<<lcs( X, Y, m, n )<<endl;
  return 0;
}
