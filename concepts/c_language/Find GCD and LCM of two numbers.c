#include <stdio.h>

int main()
{
    int T, G , L, gcd,lcm,a,b,temp;

    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &G, &L);
        a = G;
        b = L;
        while(b){
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        lcm = G*L/gcd;
        printf("%d %d\n", gcd, lcm);
    }
}
