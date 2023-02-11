#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         all(a), greater<int>()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (double)1e9+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    double p, q;
    double d, x;
    while(cin>>p>>q){
        x = fmod((1.0/q), MAX);
        double e = p*x;
        d = fmod (e, MAX);
        d = MAX - d;
        cout<<fixed<<setprecision(10)<<d<<endl;
    }

}
