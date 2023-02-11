#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[80];
    int i;

    i = atoi(gets(s));
    /*The atoi function returns the ineger equivalent
    number represented by its string argument.*/
    printf("%d", i);
}
