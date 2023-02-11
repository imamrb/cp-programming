#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rsort(a)        sort(all(a), greater<int>())
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)1e5+7
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;

    long long  t, n, a, i;
    cin>>t;
    while(t--){
        cin>>n;
        long long sum = 0;
        for(i=0; i<n; i++){
            cin>>a;
            sum += (a-1);
        }
        sum++;
        cout<<sum<<endl;
    }
    return 0;

}
