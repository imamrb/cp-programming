#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("X= ");
    scanf("%lf", &x);
    if(x<0)
        printf("log(%.2lf) = Undefined\n", x);
    else
        printf("log(%.3lf) = %.3lf",x, log(x));

    return 0;
}
