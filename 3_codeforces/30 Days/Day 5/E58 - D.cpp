#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n, x, y, i, h, w;
    char ch;

    cin>>n;
    int Max = 1, May = 1;

    for(i=0; i<n; i++){
        cin>>ch;
        if(ch=='+') {
            cin>>x>>y;
            if(x>y) swap(x, y);
            Max = max(Max, x);
            May = max(May, y);
        }
        else{
            cin>>h>>w;
            if((Max<=h && May<=w) || (May<=h && Max<=w)) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
