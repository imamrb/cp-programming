#include <stdio.h>

int main(int argc, char *argv[1])
{
    double pounds;

    pounds = atof(argv[0]) / 16.0;
    printf("%f pounds", pounds);
}
