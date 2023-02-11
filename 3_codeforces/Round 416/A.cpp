#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int t = 1;

    cin>>a>>b;

    for( ;  ;){
        if(a<t) {cout<<"Vladik"<<endl; break;}
        a-=t;
        t++;
        if(b<t){ cout<<"Valera"<<endl; break;}
        b-=t;
        t++;
    }
    return 0;
}
