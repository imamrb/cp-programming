#include <stdio.h>

int main()
{
    char str[1000];
    int i;

    while(gets(str)){
        for(i=0; str[i]; i++){
            printf("%c", str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
