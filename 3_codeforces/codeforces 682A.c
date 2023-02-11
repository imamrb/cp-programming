#include <stdio.h>
int main()
{
    unsigned long long int i, n , m, u, k, r, count;

    scanf("%I64d %I64d", &n, &m);
    count = 0;
    for(i=1; i<=n; i++){
        r = i%5;
        u = 5 - r;
        if(u<=m){
            k = m - u;
            r = k / 5;
            count+= r+1;
        }
    }
    printf("%I64d\n", count);
    return 0;
}
