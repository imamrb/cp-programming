#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
    IOS;
    int n, i, j, l, a;
    cin>>n;

    int one=0, two=0, three=0, four=0, total = 0;
    for(i=0; i<n; i++){
        cin>>a;
        switch(a){
            case 1: one++;
            break;
            case 2: two++;
            break;
            case 3: three++;
            break;
            case 4: four++;
            break;
        }
    }
    total += four;
    total += (two/2);
    two = two%2;
    if(two) {
        total++;
        two--;
        one-=2;
    }
    if(one){
        if(three>=one) {
                total += one;
                three -= one;
                one = 0;
        }
        else {
            if(three) {total += three;
            one -= three;
            three = 0;
            }
            if(one) total += (one/4);
            if(one%4) total++;
        }
    }
    if(three) total += three;

    cout<<total<<endl;

    return 0;
}
