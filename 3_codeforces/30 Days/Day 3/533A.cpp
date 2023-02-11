#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n, i, j, k;
  int Max = 0, Min = 1, cost;
  cin>>n;
  int arr[n+1];
  for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        Max = max(Max, arr[i]);
  }
  vector<int> c, t;
  while(Min<=Max){
    cost = 0;
    int tt = Min;
    for(i=0; i<n; i++){
        if(abs(tt-arr[i])>0) cost+= (abs(tt-arr[i]) - 1);
    }
    c.push_back(cost);
    t.push_back(tt);
    Min++;
  }
  int Min_cost = min_element(c.begin(), c.end()) - c.begin();

  cout<<t[Min_cost]<<" "<<c[Min_cost]<<endl;
}
