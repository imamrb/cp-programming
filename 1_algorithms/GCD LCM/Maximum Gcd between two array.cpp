/*
Problem link: https://www.hackerrank.com/contests/w34/challenges/maximum-gcd-and-sum/problem
*/
#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e6+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    int n, a, b, Max1=0, Max2=0, Max, i, j, ans;
    cin>>n;
    vector<int> A(n), B(n);
    bitset<MAX> bs1, bs2;
    for(i=0; i<n; i++){
        cin>>A[i];
        bs1[A[i]] = 1;
        Max1 = max(Max1, A[i]);
    }
    for(i=0; i<n; i++){
        cin>>B[i];
        bs2[B[i]] =1;
        Max2 = max(Max2, B[i]);
    }
    Max = max(Max1, Max2);
    for(i=Max; i>1; i--){
        j = i;
        a = 0, b = 0;
        for(j=i; j<=Max; j+=i){
            if(bs1[j]) a = i;
            if(bs2[j]) b = j;
        }
        if(a&&b) {
            ans = a+b;
            break;
        }
    }
    if(i==1) ans = Max1 + Max2;

    cout<<ans<<endl;

    return 0;
}
