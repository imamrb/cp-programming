#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p;

    p = a;
    //An array name without an index is a pointer to the start of the array
    //U can use p = &a[0] instead of p = a here.
    printf("%d %d %d", *p, *(p+1), p[2]);

    return 0;
}
