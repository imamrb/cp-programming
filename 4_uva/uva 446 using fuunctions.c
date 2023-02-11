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

        binary(n);
        printf(" %c ", ch);
        binary(m);
        if(ch=='+') printf(" = %d\n", hex1+hex2);
        else printf(" = %d\n", hex1-hex2);
    }
    return 0;
}
void binary(int b)
{
    int bin[20], i;

    for(i=0; i<13; i++){
        bin[i] = 0;
    }
    i = 0;
    while(b){
        bin[i] = b % 2;
        b /= 2;
        ++i;
    }
    for(i=12; i>=0; i--){
        printf("%d", bin[i]);
    }
    return;
}

