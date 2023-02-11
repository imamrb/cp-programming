#include<bits/stdc++.h>
using namespace std;
#define Max (int)1e5+7

int a[Max], b[Max], n;
void update(int x, int val)
{
    b[x]+=(val);
    x+=(x&-x);
    while(x<=n)
    {
        b[x]+=(val);
        x+=(x&-x);
    }
}
int getsum(int i,int j)
{
    i=i-1;
    int sum1=b[i];
    i-=(i&-i);
    while(i>0)
    {
        sum1+=(b[i]);
        i-=(i&-i);
    }
    int sum2=b[j];
    j-=(j&-j);
    while(j>0)
    {
        sum2+=b[j];
        j-=(j&-j);
    }
    return(sum2-sum1);
}
int main(){

    string s;
    cin>>s;
    n = s.length();
    a[0]=0;
    int flag[n+10][32] = {0};

    int arr[130] = {0};
    int k = 0;
    for(int i=0;i<n;i++){
        if(arr[s[i]%97]==0){
            k++;
            arr[s[i]%97]=1;
        }
        flag[i+1][s[i]%97]++;
        for(int j=0; j<32; j++){
            if(arr[j]==1) flag[i+1][j]++;
        }
        a[i+1] = k;
    }
    for(int i=0;i<n+1;i++)
    b[i]=0;
    for(int i=1;i<n+1;i++)
    {
        update(i,a[i]);
    }
    int q;
    cin>>q;
    char ch; int l, r, in, t;
    while(q--){
        cin>>t;
        if(t==2){
            cin>>l>>r;
            int ans = getsum(l, r);
            cout<<ans<<endl;
        }
        else{
            cin>>in;
            cin.ignore();
            cin>>ch;
            flag[in][s[in-1]%97]--;
            if(flag[in][ch%97]==0) update(in, a[in]+1);
        }
    }

}
