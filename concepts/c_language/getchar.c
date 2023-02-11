#include <stdio.h>

int main()
{
    char type;

    while(type!='\r') {
        type = getchar();
        putchar(type);
    }
}
