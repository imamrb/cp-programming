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
    int arr[n+1];
    for(i=0; i<n; i++) cin>>arr[i];


    int c = 1;
    int Max = 1;
    while(c<n){
        c*=2;
        int cnt = 1;
        int m = 1;
        bool flag = true;
        for(i=1; i<n; i++){
            if(arr[i]>=arr[i-1]) {
                    cnt++;
            }
            else flag=false;
            m++;
            if(m==c){
                if(flag==true)  Max = max(Max, cnt);
                m = 1;
                cnt = 1;
                ++i;
                flag = true;
            }
        }
    }

    cout<<Max<<endl;

    return 0;

}
