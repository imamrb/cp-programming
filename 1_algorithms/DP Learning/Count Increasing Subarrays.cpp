/*
https://www.codechef.com/problems/SUBINC
*/
#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int main()
{
    IOS;
    int T, n, A[MAX], i , j;
    LL B[MAX];

    cin>>T;
    while(T--){
        cin>>n;
        for(i=0; i<n; i++) {
                cin>>A[i];
                B[i] = 1;
        }
        LL cnt = 1;
        for(i=1; i<n; i++){
            if(A[i-1]<=A[i]) B[i] += B[i-1];
            cnt += B[i];
        }
        cout<<cnt<<endl;
    }

    return 0;
}
