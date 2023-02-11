#include <stdio.h>

int main()
{
    int *p, q;

    p = &q;
    q = 100;

    printf("%d %d %d\n",p, *p, q);
    *p = *p + 2;
    printf("%d %d %d",p, *p, q);
}
