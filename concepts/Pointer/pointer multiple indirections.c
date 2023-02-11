#include <stdio.h>

int main()
{
    char **mp, *p, ch;

    p = &ch;
    mp = &p;
    **mp = 'A';

    printf("%c", ch);

     return 0;
}
