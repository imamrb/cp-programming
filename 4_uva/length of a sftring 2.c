#include <stdio.h>
#include <string.h>

int main()
{
    char string[80];
    int length=0, i;

    for(i=0; i!='\r'; i++) {
        scanf("%s", &string[i]);
    }
    for(i=0; string[i]; i++) ++length;

    printf("%d", length);
}
