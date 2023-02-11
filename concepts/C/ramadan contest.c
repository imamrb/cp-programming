#include <stdio.h>

int main()
{
    char str[1001];
    int i;
    while(gets(str)){
        for(i=0; str[i]; i++){

                printf("%c", tolower(str[i]));

        }
        printf("\n");
    }
    return 0;
}
