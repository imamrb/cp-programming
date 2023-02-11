#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, i, j, a, b, k;
    cin>>n;
    vector<int> arr;
    for(i=0; i<n; i++){
        cin>>a;
        arr.pb(a);
    }
    int in[6] = {4, 8, 15, 16, 23, 42};
    int fq[100] ={0};
    int cnt = 0;
    int Min = MAX;
    for(i=0; i<n; i++){
       fq[arr[i]]++;
       for(j=1; j<6; j++){
          if(fq[in[j]]>fq[in[j-1]]){
             --fq[in[j]];
          }
       }
    }
    for(i=0; i<6; i++) Min = min(fq[in[i]], Min);
    cnt = n - (Min*6);
    cout<<cnt<<endl;

    return 0;
}
