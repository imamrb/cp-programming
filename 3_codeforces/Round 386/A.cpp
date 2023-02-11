#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, Min, c1, b1;

    cin>>a>>b>>c;

    c1 = c/4;
    b1 = b/2;

    Min = min(a,min(c1, b1));

    cout<<Min+2*Min+4*Min<<endl;

    return 0;

}
