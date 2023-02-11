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

int parent[MAX], siz[MAX];
//Initialize the array in main function
int Find(int x){
    if(parent[x]==x) return x;
    else return parent[x] = Find(parent[x]);
}
void Union(int x, int y){
    int p = Find(x);
    int c = Find(y);
    if(p==c) return;
    if(siz[c]>siz[p]) swap(c, p);
    parent[c] = p;
    siz[p] += siz[c];
}
int main()
{
    IOS;
    for(int i=0; i<MAX; i++){
        parent[i] = i; siz[i] = 1;
    }
    Union(3, 4);
    Union(6, 7);
    Union(3, 8);
    int s = Find(3);

    cout<<s<<endl;
    cout<<siz[s]<<endl;
}
