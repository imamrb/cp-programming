#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)2e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int main()
{
    IOS;
    LL n, q, c, d;

    cin>>q;

    while(q--){
        cin>>n;
        LL cnt = 0;
        while(n>1){
            if(n%2==0){
                n/=2;
            }
            else{
                c = (n*2)/3;
                d = (c*3)/2;
                if(d==n) n = c;
                else{
                    c = (4*n)/5;
                    d = (c*5)/4;
                    if(d==n) n = c;
                    else {
                        cnt = -1;
                        break;
                    }
                }
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
