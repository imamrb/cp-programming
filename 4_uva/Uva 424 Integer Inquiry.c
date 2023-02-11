#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][101];
    int arr[110];
    int i, j, k, max, carry, r, m , n, len;


    /*Taking input*/
    max = 0;
    for(i=0; i<100; i++){
        gets(str[i]);
        len = strlen(str[i]);
        if(len>max) max=len;
        if(strcmp(str[i],"0")==0) break;
    }
    /*Calculation*/
    carry = 0;
    m = 0;
    for(j=max-1; j>=0; j--){
        n = 0;
        for(k=0; k<i; k++){
            if(str[k][j]!='\0'){
                n+=(str[k][j]-48);
            }
        }
        n+=carry;
        r = n % 10;
        carry = n/10;
        arr[m] = r;
        ++m;
    }
    /*Printing Result*/
    if(carry) printf("%d",carry);
    for(n=m-1; n>=0; n--){
        printf("%d", arr[n]);
    }
    /*Thanks for ur patience */
    printf("\n");
    return 0;
}
