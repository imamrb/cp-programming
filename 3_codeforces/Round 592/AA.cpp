#include<bits/stdc++.h>
#define IOS             ios::sync_with_stdio(0); cin.tie(0);
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

int main()
{
    IOS;
    int n, i, j, a;
    vector<int> v;

    cin>>n;
    int d;
    int ncnt = 0, pcnt = 0;

    for(int i=0; i<n; i++){
        cin>>a;
        if(a%2==0) cout<<a/2<<"\n";
        else if(a<0){
            if(ncnt==0){
                 d = ceil((double)a/2.0);
            }
           else if(ncnt%2){
                d = floor((double)a/2.0);
            }
            else {
                d = ceil((double)a/2.0);
            }
            ncnt++;
            cout<<d<<"\n";
        }
        else{
            if(pcnt==0){
                d = floor(double(a)/2.0);
            }
            else if(pcnt%2){
                d = ceil((double)a/2.0);
            }
            else {
                d = floor((double)a/2.0);
            }
            pcnt++;
            cout<<d<<"\n";

        }

    }
    return 0;

}
