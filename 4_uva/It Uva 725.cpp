#include<bits/stdc++.h>
using namespace std;

int main()
{
//    freopen("output.txt","w",stdout);
    int N;

    while(cin>>N){
        if(!N) break;
        bool flag = false;
        for(int fghij= 1234; fghij<=98765/N; fghij++){
            int abcde = fghij*N;
            int tmp, used = (fghij<10000); //used = 0;
            tmp = abcde; while(tmp){used |= 1<<(tmp%10); tmp/=10;}
            tmp = fghij; while(tmp){used |= 1<<(tmp%10); tmp/=10;}
            if(used== (1<<10) - 1){
                printf("%05d / %05d = %d\n", abcde, fghij, N);
                flag = true;
            }
        }
        if(!flag) printf("There are no solutions for %d.\n", N);
        printf("\n");
    }
    return 0;
}
