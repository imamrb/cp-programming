/* Imam Hossain Santho
    Noakhali Science & Technology University
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
    LL n, m, i, j;
    n = 6;
    m = 7;
    LL cnt = 0;

    while(1){
        n+=m;
        if((n%15)==0){cout<<"Ok"<<endl; cout<<n<<" "<<cnt<<endl; break;}
        ++cnt;
    }


}
