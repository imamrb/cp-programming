#include <stdio.h>

int main()
{
    int N, M, r, b1,b2,b, i, M2;

    scanf("%d", &N);
    while(N--){
        scanf("%d", &M);
        b1 =0;
        M2 = M;
        while(M){
            r = M % 2;
            M/=2;
            if(r==1) ++b1;
        }
        b2 = 0;
        while(M2){
            r = M2 % 10;
            M2/=10;
            /*1 will be same in every type of conversion in binary represntation*/
            while(r){
                b = r % 2;
                r/=2;
                if(b==1) ++b2;
            }
        }
        printf("%d %d\n", b1, b2);
    }
    return 0;
}
