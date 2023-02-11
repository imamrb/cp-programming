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
/*
Givennitems, each with its own value Vi and weight Wi
, ∀i∈[0..n-1],and a
maximum knapsack size S, compute the maximum value of the items that we can carry;
*/
int n;
int arr[100][1000]; //n*s;
int w[] ={10, 4, 6, 12};
int v[] ={100, 70, 50, 10};

int findMax(int id, int remW){
    if(remW==0) return 0;
    else if(id==n) return 0;
    else if(w[id]>remW) return arr[id][remW] = findMax(id+1, remW);
    else return arr[id][remW] = max(findMax(id+1, remW), v[id]+findMax(id+1, remW-w[id]));
}
int main()
{
    IOS;

    int i, j;
    n = (sizeof(v)/sizeof(v[0]));
    int s = 12;

    int ans = findMax(0, s);

    cout<<ans<<endl;
}
