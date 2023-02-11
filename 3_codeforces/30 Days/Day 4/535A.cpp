#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long q, a, b,  i, j, x, y, c, d ;


    cin>>q;

    for(i=0; i<q; i++){
        cin>>a>>b>>c>>d;
        x = a;
        for(j=c; j<=d; j++){
            if(j!=x) { y = j; break; }
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
