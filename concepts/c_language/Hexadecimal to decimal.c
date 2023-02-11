#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char hex[100];
    int len,decimal,d, y, i,p;

    while(gets(hex)){
        decimal = 0;
        len = strlen(hex);
        y = len - 1;
        for(i=0; hex[i]; i++){
            p = pow(16,y);
            if(isalpha(hex[i])){
                d = (hex[i]-55) * p;
            }
            else d = (hex[i]-48) * p;
            decimal+=d;
            --y;
        }
        printf("Decimal Equivalent: %d\n", decimal);
    }
    return 0;
}
