/* This program Efficiently Convert a binary number
  into its Decimal Equivalent.
  Input taken as Strings
*/
#include <stdio.h>
#include <string.h>

int main()
{
    long long int dec, i, len;
    char bin[100];

    printf("Enter the number in Binary: \n");
    scanf("%s", bin);

    len = strlen(bin);
    dec = 0;
    printf("Number of Binary digits: %lld\n", len);
    for(i=0; i<len; i++){
        if(bin[i]=='1') dec = dec*2 +1;       //bitweise dec = (dec<<1) + 1;
        else if(bin[i]=='0') dec = dec*2;    //bitweise dec = dec<<1;
    }
    printf("Decimal Equivalent: %lld\n", dec);

    return 0;
}
