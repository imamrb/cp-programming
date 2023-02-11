#include <stdio.h>
typedef long long LL;

LL Big_mode(LL a, LL p, LL m);

LL Big_mode(LL a,LL p, LL m)
{
    /* Function to calculate (a^p)%m */
    LL r = 1;
    while(p!=0){
        if(p%2) r = (r*a)%m;
        a = (a*a)%m;
        p/=2;
    }
    return r;
}
int main()
{
    int T;
    LL x, y, n, z;

    while(scanf("%d", &T) && T){
        while(T--){
            scanf("%lld %lld %lld", &x, &y, &n);
            z = Big_mode(x, y, n);
            printf("%lld\n", z);
        }
    }
    return 0;
}
