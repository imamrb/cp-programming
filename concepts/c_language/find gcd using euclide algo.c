#include <stdio.h>

int main()
{
    int k,j,i,z,temp,nums;
    scanf("%d %d", &i, &j);
    do {
        z = j % i;
        j = i;
        if(z!=0) i = z;

    } while (z!=0);

    printf("%d", i);

    return 0;

}
//normal implementation, do proper later u open like swiping etc etc
