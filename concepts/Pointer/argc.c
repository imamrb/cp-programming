#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    double d;
    long l;

    i = atoi(argv[1]);
    d = atof(argv[1]);
    l = atol (argv[0]);

    printf("%d %ld %f", i, l, d);
}
