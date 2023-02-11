#include <stdio.h>

int main()
{
    char *p, **mp, str[80];

    p = str;
    mp = &p;

    gets(*mp);
    printf("Hi %s", *mp);
    return 0;
}
