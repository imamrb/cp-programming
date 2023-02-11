#include <stdio.h>

int main()
{
    int count[10];
    int *p, i;

    p = count;

    for(i=0; i<10; i++)
        *(p+i) = i+1;

    for(i=0; i<10; i++){
        printf("%d %d\n", *(p+i), count[i]);
    }

}
