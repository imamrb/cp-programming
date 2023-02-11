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

    int T, n, i, j, a, b;


    cin>>T;
    while(T--){
        cin>>n;
        vi ak(n), df(n);
        for(i=0; i<n; i++) cin>>ak[i];
        for(i=0; i<n; i++) cin>>df[i];

        priority_queue<int> pq;
        pq.push(-1);
        for(i=0; i<n; i++){
            if(i==0) a = i+1, b = n-1;
            else if(i==n-1) a = n-1-1, b = 0;
            else a = i+1, b = i - 1;
            if(df[i]>(ak[a]+ak[b])) pq.push(df[i]);
        }
        cout<<pq.top()<<endl;
    }
    return 0;
}
