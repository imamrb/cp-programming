#include <stdio.h>

int main()
{
    int T,n,i,s,t;

    scanf("%d", &T);
    for(i=1; i<=T; i++) {
        scanf("%d", &n);
        s=n/2;
        t = n-s;
        printf("%d %d\n", s , t);
    }
    return 0;
}
