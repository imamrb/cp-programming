#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i, a, win, m, T;
    queue<long long> Q;

    cin>>n>>T;

    for(i=0; i<n; i++){
        cin>>a;
        Q.push(a);
    }

    k = Q.front();
    Q.pop();
    win = 0;

    while(!Q.empty()){
        m = Q.front();
        Q.pop();
        if(k>=m){
            win++;
            if(win==T) break;
        }
        else{
            win = 1;
            k = m;
        }
    }
    cout<<k<<endl;

    return 0;
}
