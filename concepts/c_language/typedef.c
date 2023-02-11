#include <stdio.h>
#include <math.h>

#define NUMBER 10

int main()
{
    typedef float result;
    result Ans;
    int i;

    for(i=0; i<=NUMBER; i++) {
        Ans = sqrt(i);
        printf("%2.2f \n", Ans);
    }
}
