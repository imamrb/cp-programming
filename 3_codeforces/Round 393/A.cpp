#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, d=1;

    cin>>n>>m>>k;

    m -= n;
    if(k==1 || k==n){
        int b = 1;
        k = n-1;
        while(m>0 && b<=k){
            if(m>=(n-b)){
                m -= (n-b);
                b++;
                d++;
            }
        }
        d += (m/n);
    }
    else{
        int left = 1;
        int right = n-k-1;
        while(m>0 && left<=k && right>=0){
            m -= (k-left);
            left++;
            m-= right;
            right--; --m;
            if(m>-1) d++;

        }
        d += (m/n);
    }
    cout<<d<<endl;

    return 0;
}
