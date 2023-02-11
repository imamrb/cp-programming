#include <stdio.h>

int main()
{
    char str[20][100];
    int N, i;


    scanf("%d", &N);
    i = 0;
    do {
        gets(str[i]);
        ++i;
    } while (i<=N);
    for(i=0; i<N; i++) {
        printf(str[i]);
        printf("\n");
    }
    return 0;
 }
