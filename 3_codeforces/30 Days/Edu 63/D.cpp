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
    LL n, x, i, j, k;

    cin>>n>>x;
    LL a[n+10], cum[n+10];
    LL sum = 0, ans = 0, restart = 0, start = 0, stop = 0, result = 0;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(i) cum[i] = cum[i-1] + a[i];
        else cum[i] = a[i];
        sum += a[i];
        result = max(result, sum);
        if(sum<0) sum = 0;
    }

    bool flag = false; sum = 0;
    for(i=0; i<n; i++){
        k = (a[i]*x);
        sum += k;
        if(sum>=ans){
            ans = sum;
            start = restart;
            stop = i;
            flag = true;
        }
        if(sum<0){
            if(flag && ans>(cum[stop]-cum[start])){
                sum = 0;
                for(j=0; j<n; j++){
                    if(j>=start && j<=stop) sum+= (a[j]*x);
                    else sum += a[j];
                    result = max(result, sum);
                    if(sum<0) sum = 0;
                }
            }
            restart = i+1;
            sum = 0;
            flag = false;
        }
    }
    if(flag && ans>(cum[stop]-cum[start])){
        sum = 0;
        for(j=0; j<n; j++){
            if(j>=start && j<=stop) sum+= (a[j]*x);
            else sum += a[j];
            result = max(result, sum);
            if(sum<0) sum = 0;
        }
    }

    cout<<result<<endl;


}
