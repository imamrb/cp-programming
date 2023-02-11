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
    int t, n, a, i, j;

    cin>>t;
    while(t--){
        cin>>n;
        bool flag = true;
        bitset<510> row, col;
        row.reset(); col.reset();
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin>>a;
                if(a==0) {
                        row[i]= 1;
                        col[j] = 1;
                }

            }
        }
        for(i=0; i<n; i++){
            if(col[i]==0 || row[i]==0) {
                    flag = false;
                    break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;

}
