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
    int n, i, j;

    cin>>n;

    int cnt = 1;
    if(n<10) cnt = 0;
    while(n>=10){
        n++;
        while(n%10==0){
            n/=10;
            if(n<10) break;
        }
        if(n<10) break;
        cnt++;
    }
    cnt+=9;


    cout<<cnt<<endl;


}
