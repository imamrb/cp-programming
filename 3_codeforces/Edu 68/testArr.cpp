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
    int n, i, j;
    string a, b;

    cin>>a>>b;
    int la = a.length();
    int lb = b.length();
    int bo = 0, ao = 0;
    for(i=0; i<lb; i++){
        if(b[i]=='1') bo++;
    }
    bo = bo%2;
    int arr[la+10] = {0};
    if(a[0]=='1') arr[0]++;
    for(i=1; i<la; i++){
        arr[i] = arr[i-1];
        if(a[i]=='1') arr[i]++;
    }
    int cnt = 0;
    if(arr[lb-1]%2 == bo) cnt++;
    for(i=lb; i<la; i++){
        ao = (arr[i]-arr[i-lb]) % 2;
        if(ao==bo) cnt++;
    }
    cout<<cnt<<endl;

    return 0;

}
