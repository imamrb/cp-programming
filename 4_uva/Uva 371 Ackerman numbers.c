#include <stdio.h>

int main()
{
    long int N, H, L, V, S , count , max, i, temp;

    while(scanf("%ld %ld", &L, &H) && (L || H)!=0){
        if(L>H){
            temp = H;
            H = L;
            L = temp;
        }
        S = 0;
        for(i=L; i<=H; i++){
            if(i%2==0) N = i/2;
            else N = 3*i + 1;
            count = 1;
            while(N!=1){
                if(N%2==0) N = N/2;
                else N = N*3 + 1;
                ++count;
            }
            if(count>S){
                S = count;
                V = i;
            }
        }
        printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", L, H, V, S);
    }
    return 0;
}
