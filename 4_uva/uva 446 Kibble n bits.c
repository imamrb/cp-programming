#include <stdio.h>

int main()
{
    int hex1, hex2, i , j, T, m , n;
    int bin1[100], bin2[100];
    char ch;

    scanf("%d", &T);
    while(T--){
        scanf("%x %c %x", &hex1, &ch, &hex2);
        n = hex1; m = hex2;
        for(i=0; i<13; i++){
            bin1[i] = 0;
            bin2[i] = 0;
        }
        i = 0;
        while(n){
            bin1[i] = n % 2;
            n/=2;
            ++i;
        }
        i = 0;
        while(m){
            bin2[i] = m % 2;
            m /= 2;
            ++i;
        }
        for(i=12; i>=0; i--){
            printf("%d", bin1[i]);
        }
        printf(" %c ", ch);
        for(i=12; i>=0; i--){
            printf("%d", bin2[i]);
        }
        if(ch=='+') printf(" = %d\n", hex1+hex2);
        else printf(" = %d\n", hex1-hex2);
    }
    return 0;
}
