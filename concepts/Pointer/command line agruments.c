#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, sum = 0;
    for(i=0; i<argc; i++){
        sum += atoi(argc[i]);
    }
    printf("The sum of the numbers is: %d", sum);

    return 0;
}
