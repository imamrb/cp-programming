#include <stdio.h>
#include <math.h>

int main()
{
    long long int s1, s2, diff;

    while(scanf("%lld %lld", &s1, &s2)!=EOF){
        diff = abs(s1-s2);
        printf("%lld\n", diff);
    }
    return 0;
}
