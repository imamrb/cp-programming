#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

LL memo[MAX];

LL Fibonacci(LL n){
    if (n == 1) memo[1];
    else if (n == 2) memo[2];
    if(memo[n] != -1) return memo[n];
    return memo[n] = Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    IOS;
    LL i, n;
    memset(memo, -1, sizeof(memo));
    memo[1] = 1; memo[2] = 1;

    while(1){
        cout<<"Number of memonacci Numbers to generate:";
        cin>>n;
        Fibonacci(n);
        for(i=1; i<=n; i++){
            cout<<memo[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
