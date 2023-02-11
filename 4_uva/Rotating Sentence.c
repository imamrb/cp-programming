#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][101];
    int max, i, j, k, len;

    i = 0;
    max = 0;
    while(gets(str[i])){
        len = strlen(str[i]);
        if(len>max)
            max = len;
        ++i;
    }
    for(j=0; j<i; j++){
        len = strlen(str[j]);
        if(len<max){
            for(k=len; k<max; k++){
                str[j][k] = ' ';
            }
            str[j][k] = '\0';
        }
    }
    for(j=0; j<max; j++){
        for(k=i-1; k>=0; k--)
            printf("%c", str[k][j]);
        printf("\n");
    }
    return 0;
}
