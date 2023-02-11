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
    int n, m, i, j, xo, a, x, y;
    int arr[510][510];

    cin>>n>>m;
    xo = 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>a;
            arr[i][j] = a;
            if(j==0) xo = xo^a;
        }
    }
    bool flag = false;
    x = n-1; y = 1;
    if(xo>0) flag = true;
    if(flag==false){
        for(i=0; i<n; i++){
            xo^=arr[i][0];
            for(j=1; j<m; j++){
                if(arr[i][j]!=arr[i][0] && (xo^arr[i][j])>0){
                    x = i;
                    y = j+1;
                    flag = true;
                    break;
                }
            }
            if(flag==true) break;
            else xo^=arr[i][0];
        }
    }
    if(flag==true){
        cout<<"TAK"<<endl;
        for(i=0; i<n; i++){
            if(i==x) cout<<y<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
    else cout<<"NIE"<<endl;

    return 0;

}
