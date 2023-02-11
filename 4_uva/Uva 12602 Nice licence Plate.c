#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    int T, i, n, absvalue;
    double d, sum;
    scanf("%d", &T);
    while(T--){
        getchar();
        sum = 0;
        for(i=2; i>=0; i--){
            scanf("%c", &ch);
            d = pow(26,i);
            sum += (ch-65)*d;
        }
        getchar();
        scanf("%d", &n);
        absvalue = abs(sum - n);
        if(absvalue<=100) printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
