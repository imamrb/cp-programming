/*  Imam Hossain Santho
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
typedef pair<LL, LL> pill;

vector<LL> adj[MAX], v(MAX), m(MAX), ma(MAX), fq(20, 0);
vector<pill> ans;
bitset<MAX> vis;
bitset<20> check;


void findAns(LL w, LL Max){
    LL sum, s;
    --Max;
    check.reset();
    check[w] = 1;
    sum = Max;
    for(int i=1; ;i++){
        sum += w;
        s = sum%10;
        if(check[s]) break;
        check[s] = 1;
    }
    if(Max==0 || check[0]) return Max;
    else if(fq[1] || fq[3] || fq[7] || fq[9]){
            return Max;
    }
    else if((fq[2] || fq[4] || fq[6] || fq[8]) && fq[5]){
            return Max;
    }
    else if(check[5] && fq[5]) return Max;
    else{
        if(fq[2] || fq[4] || fq[6] || fq[8]){
            if(check[2] || check[4] || check[6] || check[8]){
                return Max;
            }
            else return findAns(w,Max);
        }
        else return findAns(w,Max);
    }
}
void dfs(LL u){
    vis[u] = 1;
    fq[v[u]]++;
    for(auto node: adj[u]){
        if(vis[node]==0){
            dfs(node);
            fq[v[u]]--;
        }
    }
    if(adj[u].size()==1 && u>1){
         LL xyz = findAns(m[u], m[u]);
         ans.pb({u, (ma[u] - (m[u]-xyz))});
    }
}
int main()
{
    IOS;
    LL t, n, x, y, i, j, a;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1; i<n; i++){
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(i=1; i<=n; i++){ cin>>a; x = a%10; v[i] = x;}
        for(i=1; i<=n; i++){ cin>>a; ma[i] = a; x = a%10; m[i] = x;}
        dfs(1);
        sort(all(ans));
        for(auto it: ans) cout<<it.second<<" "; cout<<endl;

        vis.reset();
        for(i=1; i<=n; i++) adj[i].clear();
        ans.clear();
        fill(all(fq), 0);
    }

    return 0;
}
