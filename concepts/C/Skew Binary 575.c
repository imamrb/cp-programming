#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char skew[1000];
     long int sum, d;
    int i, j, y;

    while(gets(skew) && skew[0]!='0'){
        y = strlen(skew);
        if(y==1 && skew[0]=='0') break;
        sum = 0;
        for(i=0; skew[i]; i++){
           d = pow(2, y);
           sum+=(skew[i]-48)*(d-1);
           --y;
        }
        printf("%ld\n", sum);
    }
    return 0;
}
