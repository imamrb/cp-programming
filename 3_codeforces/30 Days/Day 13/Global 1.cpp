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
typedef long long LL;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;
    int b, k, a, i;
    cin>>b>>k;

    int odd = 0;
    for(i=k-1; i>=0; i--){
        cin>>a;
        if(a%2) odd++;
    }
    if(b%2==0){
        if(a%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    else if(odd%2==0){
            cout<<"even"<<endl;
    }
    else cout<<"odd"<<endl;

    return 0;
}
