#include<bits/stdc++.h>
using namespace std;
int v[5010][5010];
int visit(int x, int y, int k){
    int cnt0=0, cnt1=0;
    for(int i=x; i<x+k; i++){
        for(int j=y; j<y+k; j++){
            if(v[i][j]==0) cnt0++;
            else cnt1++;
        }
    }
    return min(cnt0, cnt1);
}
int main()
{
    int n, m, i, j, cnt=0;

    cin>>n>>m;

    for(i=0; i<n; i++){
        string s;
        cin>>s;
        for(j=0; j<m; j++){
            if(s[j]=='0') v[i][j] =0;
            else v[i][j]=1;
        }
    }
    int k = ceil(max(m,n)/2.00);
    int rslt = 1e8;
    for(int x=2; x<=k; x++){
        cnt = 0;
        int N = ceil(double(n)/x) * x;
        int M = ceil(double(m)/x) * x;
        for(i=0; i<N; i+=x){
            for(j=0; j<M; j+=x){
                cnt+=visit(i, j, x);
            }
        }
        rslt = min(cnt, rslt);
    }
    cout<<rslt<<endl;

    return 0;
}
