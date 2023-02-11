#include <stdio.h>

int main()
{
    char s1[80], s2[80];
    gets(s1);
    gets(s2);
    printf("%d\n", strcmp(s1, s2));
    printf("%s\n", strcat(s1,s2));
    printf("%s\n", strcpy(s1,s2));

    return 0;
}
