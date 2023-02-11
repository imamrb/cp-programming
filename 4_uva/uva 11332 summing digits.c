#include <stdio.h>

int main()
{
    long int n, m , sum , r;

    while(scanf("%ld", &n) && n){
        while(n/10){
            m = n;
            sum = 0 ;
            while(m){
                r = m % 10;
                m/=10;
                sum +=r;
            }
            n = sum;
        }
        printf("%ld\n", n);
    }
    return 0;
}
