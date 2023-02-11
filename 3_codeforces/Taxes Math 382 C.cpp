
#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;
bool isprime(int n){
    int d = sqrt(n);
    for(int i=2; i<=d; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    IOS;
    int n, ans;

    cin>>n;

    if(isprime(n)) ans = 1;
    else if(n%2==0) ans = 2;
    else{
        if(isprime(n-2)) ans = 2;
        else ans = 3;
    }
    cout<<ans<<endl;
}
