#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)5e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;

int parent[MAX], siz[MAX];

int Find(int x){
    if(parent[x]==x) return x;
    else return parent[x] = Find(parent[x]);
}
void Union(int x, int y){
    int p = Find(x);
    int c = Find(y);
    if(siz[c]>siz[p]) swap(c, p);
    parent[c] = p;
    siz[p] += siz[c];
}

int main()
{
    IOS;
    int n, i, j, m, k;
    int arr[MAX];
    for(i=0; i<MAX; i++) {
            parent[i] = i;
            siz[i] = 1;
    }
    cin>>n>>m;
    while(m--){
        cin>>k;
        for(i=0; i<k; i++){
            cin>>arr[i];
            if(i>0) Union(arr[i], arr[i-1]);
        }
    }
    for(i=1; i<=n; i++){
        int p = Find(i);
        cout<<siz[p]<<" ";
    }
    cout<<endl;
}
