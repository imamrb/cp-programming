#include <stdio.h>

int main()
{
    myputs("This is a test");

    return 0;
}
void myputs(char *p)
{
    while(*p){
        printf("%c", *p++);
    }
    printf("\n");
}
