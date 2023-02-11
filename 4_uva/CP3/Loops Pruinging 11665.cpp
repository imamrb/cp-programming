#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, a, b, c, x, y, z;

    cin>>T;
    while(T--){
        cin>>a>>b>>c;
        bool sol = false;
        for(x=-22; x<=22 && !sol; x++) if(x*x<=c){
            for(y=-100; y<=100 && !sol; y++) if(y!=x && x*x+y*y<=c){
                for(z=-100; z<=100 && !sol; z++){
                    if(z!=x && z!=y && x+y+z==a && x*y*z==b && x*x+y*y+z*z==c){
                        printf("%d %d %d", x, y, z);
                        sol = true; break;
                    }
                }
            }
        }
        if(!sol) cout<<"No solution."<<endl;
    }
    return 0;
}
