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
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main()
{
    IOS;

    int T, n, i, j, cnt;
    string s;
    set<char> st;
    int arr[200];
    cin>>T;
    while(T--){
        cin>>n;
        memset(arr, 0, sizeof(arr));

        for(i=0; i<n; i++){
            cin>>s;
            for(auto p: s) st.insert(p);
            for(auto it: st) arr[it]++;
            st.clear();
        }
        cnt = 0;
        for(i=97; i<=122; i++){
            if(arr[i]==n) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;

}
