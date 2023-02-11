#include <stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    int i, N;

    printf("Number of Slogan Prince will teach: ");
    scanf("%d", &N);

    for(i=0; i<N; i++){
        printf("Enter first part: ");
        gets(s1[i]);

    }
    for(i=0; i<N; i++) {
        printf(s1[i]);

    }

    return 0;
}
