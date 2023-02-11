#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 200

int f(int i)
{
    int cnt = 0;
    for(int j=1; j<=10; j++) ++cnt;
    return cnt;
}
int main()
{
    for(int v=1; v<=10; v++){
        cout<<f(v)<<endl;
    }
}
