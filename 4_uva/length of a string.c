#include <stdio.h>
#include <string.h>

int main()
{
    char string[80];
    int length;

    gets(string);

    length = 0;
    while(length[string]!='\0') ++length;

    printf("%d", length);
}
