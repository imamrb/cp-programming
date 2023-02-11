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

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        LL A,B;
        cin>>A>>B;
        LL num,step = 0LL;
        if(A%3==0) num = A;
        else if((A+1)%3==0) num = A+1;
        else num = A+2;
        step = num - A;
        LL rem = B%3;
        if((B-1)%num==0) --B;
        else if((B-2)%num==0) B-=2;
        B/=num;
        LL k = 0;
        while(num!=B){
            B/=3;
            ++k;
        }
        cout<<"Case "<<i<<": "<<step+k+1+rem<<endl;
    }

    return 0;
}
