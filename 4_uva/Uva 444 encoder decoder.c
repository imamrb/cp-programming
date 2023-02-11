#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, r, n, k;

    while(gets(str)){
        len = strlen(str);
        if(str[0]-48>10){
            for(i=len-1; i>=0; i--){
                n = str[i];
                while(n){
                    r = n%10;
                    n/=10;
                    printf("%d", r);
                }
            }
        }
        else {
            for(i=len-1; i>=0; ){
                k = 0;
                while(k<32){
                    n = str[i]-48;
                    k = k*10+n;
                    --i;
                }
                printf("%c", k);
            }
        }
        printf("\n");
    }
    return 0;
}
