#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    int total = 1;

    cin>>a>>b;

    if(b-a>=5) cout<<0<<endl;

    else{
        int cnt = a%10;
        c = b%10;
        for(int j=c; j--;){
            if(j==cnt) break;
            total *= j;
            cout<<total<<endl;
        }
        cout<<total<<endl;
        cout<<total%10<<endl;
    }
    return 0;
}
