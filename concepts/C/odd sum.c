#include <stdio.h>

int main()
{
    int a,b,j,sum, T, i;

    scanf("%d", &T);
    for(j=1; j<=T; j++){
        scanf("%d %d", &a, &b);
        sum = 0;
        for(i=a; i<=b; i++){
            if(i&1) sum+=i;
            /*taking mod of 2 using bitwise & */
        }
        printf("Case %d: %d\n", j, sum);
    }
    return 0;
}
