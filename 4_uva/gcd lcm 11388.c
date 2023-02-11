#include <stdio.h>

int main()
{
    long int T, G , L, a, b;

    scanf("%ld", &T);
    while(T--){
        scanf("%ld %ld", &G, &L);
        a = G;
        /*a is the smallest positive number that can be divided by G?
        That is G itself */
        if(L%G!=0) {
            printf("-1\n");
        }
        else {
            b = L;
            /* G*L=a*b=G*b */
            printf("%ld %ld\n", a, b);
        }
    }
    return 0;
}
