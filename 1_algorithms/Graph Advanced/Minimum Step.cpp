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
    LL n, k, t, a, b, cnt;

    cin>>n;
    for(t=1; t<=n; t++){
        cin>>a>>b;

        if(a<0 && b<0){

        }
        k = b/3LL;
        cnt = 0LL;
        if(k>=a && k>0LL){
            do{
                ++cnt;
                cnt += (b - k*3LL);
                b/=3LL;
                k = b/3LL;
            }while(k>=a && k>0LL);
            cnt += (b - a);
        }
        else{
            cnt = abs(b - a);
        }
        cout<<"Case "<<t<<": "<<cnt<<endl;
    }
    return 0;
}
