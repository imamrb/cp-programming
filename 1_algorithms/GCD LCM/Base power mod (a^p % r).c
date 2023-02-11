#include <stdio.h>
typedef long long LL;
LL Big_Mod(LL base, LL power, LL mod);
int main()
{
    LL base, power, mod;
    printf("Enter Base, Power & the number to Mod:\n");
    scanf("%lld %lld %lld", &base, &power, &mod);

    printf("The result of %lld^%lld %% %lld = %lld\n",base, power, mod, Big_Mod(base, power, mod));
}
LL Big_Mod(LL base, LL power, LL mod)
{
    LL r = 1;

    while(power!=0){
        if(power%2!=0) r = (r*base)%mod;
        base = (base*base)% mod;
        power/=2;
    }
    return r;
}
/*
    lets look at the whole example:
    (3%7) = 3 (Base case, Lowest level of the tree)
    (3^2)%7 = ( (3%7) * (3%7) ) % 7 = 9 % 7 = 2  here base*base = 9%7=2 = new base;
    (3^4)%7 = ( ((3^2)%7) * ((3^2)%7) ) %7 = ( 2 * 2)%7 = 4%7 = 4
    (3^5)%7 = ( ((3^4)%7) * 3%7)%7 = (4*3)%7 = 12 % 7 = 5.

    The answer is 5.
*/
