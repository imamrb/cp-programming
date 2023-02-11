#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, s, d, r;

    cin>>n>>k;

    int f = n;
    int t = n*2;
    int check = 1;
    for(int i=0; i<k; i++){
        cin>>s;
        while(s>0){
            int d = s/4;
            if(f>0){
                f -= d;
                r = ceil((s - (d*4))/2.00);
            }
            else r = ceil(s/2.00);
            if(t>0) t-=r;
            else if(f>0){

            }
        }
    }
    if(check==0) printf("NO\n");
    else printf("YES\n");

    return 0;
}
