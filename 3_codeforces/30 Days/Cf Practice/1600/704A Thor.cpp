#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb              push_back
#define mkp             make_pair
#define all(a)          a.begin(), a.end()
#define rall(a)         a.rbegin(), a.rend()
#define maximum(a)      *max_element(all(a))
#define minimum(a)      *min_element(all(a))
#define MAX             (int)3e5+7
using namespace std;
typedef long long LL;
typedef pair<int, int> pi;
typedef pair<LL, LL> pill;


int main()
{
    IOS;
    int n, i, j, e, t, x, y;

    cin>>n>>e;
    queue<pi> q;
    vector<queue<int> > v(MAX);
    bitset<MAX> read;

    int total = 0;
    int c = 0;
    for(i=0; i<e; i++){
        cin>>t>>x;
        if(t==1) {
                total ++;
                c++;
                q.push({c, x});
                v[x].push(c);
        }
        else if(t==2){
            while(!v[x].empty()){
                j = v[x].front();
                if(!read[j]) --total;
                read[j] = 1;
                v[x].pop();
            }
        }
        else{
            while(!q.empty() && q.front().first<=x){
                j = q.front().first;
                y = q.front().second;
                q.pop();
                if(!read[j]){
                    total --;
                    read[j] = 1;
                    v[y].pop();
                }
            }
        }
        cout<<total<<endl;
    }

}
