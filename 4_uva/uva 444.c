#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i, len, r, n, k=0;;
    char ch;

    while((ch=getchar())!=EOF){
        if(ch-48>10){
            n = ch;
            while(n){
                r = n%10;
                n/=10;
                printf("%d", r);
            }
        }
        else {
            if(k>=65)  k = 0;
            while(k<65){
                n = ch-48;
                k = k*10+n;
            }
            printf("%c", k);
        }
        printf("\n");
    }
    return 0;
}
