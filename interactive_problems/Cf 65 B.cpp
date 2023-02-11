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

int main()
{
    int i, j, k, a;
    int arr[] ={-1, 4, 8, 15, 16, 23, 42}, in[10];
    bitset<MAX> bs;
    for(i=1; i<=6; i++) bs[arr[i]] = 1;

    i = 1;
    printf("? 1 2\n"); fflush(stdout);
    scanf("%d", &in[i++]);
    printf("? 2 3\n"); fflush(stdout);
    scanf("%d", &in[i++]);
    printf("? 4 5\n"); fflush(stdout);
    scanf("%d", &in[i++]);
    printf("? 5 6\n"); fflush(stdout);
    scanf("%d", &in[i++]);

    vector<int> v, ans(10), fq(100, 0);
    int pos = 2;
    for(i=1; i<=4; i++){
        for(j=1; j<=6; j++){
            a = in[i]/arr[j];
            if(bs[a]==1){
                fq[a]++;
                fq[arr[j]]++;
                v.pb(a);
                v.pb(arr[j]);
                if(fq[a]==2) {ans[pos] = a; pos = 5;}
                else if(fq[arr[j]]==2) {ans[pos] = arr[j]; pos = 5;}
                break;
            }
        }
        if(i==2 || i==4){
           if(i==2) pos = 1;
           else pos = 4;
           for(j=0; j<v.size(); j++){
              if(fq[v[j]]==1) {
                  ans[pos] = v[j];
                  pos += 2;
              }
           }
           v.clear();
        }
    }
    printf("!");
    for(i=1; i<=6; i++) printf(" %d", ans[i]);
    printf("\n");
    fflush(stdout);
    return 0;
}
