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

    int arr[15];
    string s;

    cin>>n;
    cin>>s;
    for(i=1; i<=9; i++){
        cin>>arr[i];
    }
    bool flag = false;
    int val;
    for(i=0; i<n; i++){
        val = s[i] - 48;
        if(arr[val]>val){
            while(arr[val]>=val){
                s[i] = arr[val] + 48;
                i++;
                if(i==n) break;
                flag = true;
                val = s[i] - 48;
            }
        }
        if(flag) break;
    }
    cout<<s<<endl;

    return 0;


}
