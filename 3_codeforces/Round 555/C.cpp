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
string k, z;
deque<int> d;
string s, k, z;
int last=0;

int countMax(int x){
    if(x==0) {
            d.pop_front();
            k += 'L';
    }
    else {
        d.pop_back();
        z += 'R';
    }
    while(!d.empty()){
        int f = d.front();
        int b = d.back();
        if(f==b){
            if(f>last) {
                    int mx = max(countMax(0), countMax(1));
                    if(mx==k.size()) w += k;
                    else w+=z;
                    k = ""; z = "";
            }
        }
        if(f<last && b<last) break;
        if(f<last) f = MAX;
        if(b<last) b = MAX;
        if(f<b && f>last){
            d.pop_front();
            s+='L';
            last = f;
        }
        else if(b<f && b>last){
            d.pop_back();
            s += 'R';
            last = b;
        }
        else break;
    }
    return max(k.size(), z.size());
}
int main()
{
    IOS;
    int n, i, j, a;

    cin>>n;
    for(i=0; i<n; i++){
        cin>>a;
        d.pb(a);
    }

    while(!d.empty()){
        int f = d.front();
        int b = d.back();
        if(f==b){
            if(f>last) int mx = max(countMax(0), countMax(1));
        }
        if(f<last && b<last) break;
        if(f<last) f = MAX;
        if(b<last) b = MAX;
        if(f<b && f>last){
            d.pop_front();
            s+='L';
            last = f;
        }
        else if(b<f && b>last){
            d.pop_back();
            s += 'R';
            last = b;
        }
        else break;
    }
    cout<<s.size()<<endl;
    cout<<s<<endl;

}
