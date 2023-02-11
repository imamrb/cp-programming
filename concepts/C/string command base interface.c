#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char command[80], temp[80];
    int i, j;

    for( ; ; ) {
        printf("Operation? ");
        printf("(divide/multiply/add/subtract/quite?)\n");
        gets(command);

        if(!(strcmp(command, "quit"))) break;

        printf("Enter the first number: ");
        gets(temp);
        i = atoi(temp);
        /*scanf for scanning i and j not used here
        bescause its incompatitable with gets*/

        printf("Enter the second number: ");
        gets(temp);
        j = atoi(temp);

        if(!strcmp(command, "add"))
            printf("%d\n", i+j);
        else if(!strcmp(command, "subtract"))
            printf("%d\n", i-j);
        else if (!strcmp(command, "divide")) {
            if(j) printf("%d\n", i/j);
        }
        else if(!strcmp(command, "multiply"))
            printf("%d\n", i*j);
        else printf("Unknown command");
    }
    return 0;
}
