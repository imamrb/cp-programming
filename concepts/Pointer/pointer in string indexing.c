#include <stdio.h>

int main()
{
    char *p, ch;
    int i;

    p = &ch;
    ch = 'a';
    printf("%c", p[0]);
}
