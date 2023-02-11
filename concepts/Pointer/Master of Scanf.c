#include <stdio.h>

int main()
{
    char str;

    printf("Scanset %%[ABC] \n");
    scanf("%2c", &str);

    putchar(str);

}
