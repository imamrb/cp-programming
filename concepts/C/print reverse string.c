#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80];
    int i,length;

    printf("Enter a string less than 80 char:");
    gets(str);
    length = strlen(str);
    for(i=length; i>=0; i--) printf("%c", str[i]);

    return 0;
}
