#include <stdio.h>
#define Max 2000000000
int main()
{
    long int a, b, sum, n, r, i, t=1;
    while(scanf("%ld %ld", &a, &b) && a!=0 || b!=0){
        sum = 0;
        for(i=a; i<=b; i++){
            n = count1(i);
            sum+=n;
        }
        printf("Case %ld: %ld\n", t++, sum);
    }
}
int count1(long int n)
{
    long int count = 0, r;
    while(n){
        r = n & 1;
        n = n >> 1;
        if(r==1) count++;
    }
    return count;
}
