#include <stdio.h>
typedef long long LL;

LL Big_MOD(LL a, LL p, LL m);

int main()
{
    LL B, P, M;
    while(scanf("%lld %lld %lld", &B, &P, &M)!=EOF){
        printf("%lld\n", Big_MOD(B, P, M));
    }
    return 0;
}
LL Big_MOD(LL a, LL p, LL m)
{
    LL r = 1;
    while(p){
        if(p%2!=0) r = (r*a)%m;
        a = (a*a)%m;
        p/=2;
    }
    return r;
}
