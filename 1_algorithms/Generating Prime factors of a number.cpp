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

int main()
{
    IOS;
    LL i, n;
    vector<LL> factors;
    cout<<"Enter a number: ";

    //main function
    while(cin>>n){
        for(i=2; i<=n; i++){
            if(i*i>n) i = n;
            while(n%i==0){
                n/=i;
                factors.pb(i); //recording in vector
            }
        }
        cout<<"Prime factors of the number is: "<<endl;
        for(auto p: factors) cout<<p<<" ";
        cout<<endl;
        factors.clear();
        cout<<"Enter a number: ";
    }
    return 0;

}
