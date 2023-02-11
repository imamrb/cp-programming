#include <stdio.h>
void prompt(char *p, char *msg);
int main()
{
    char msg[1000];
    prompt("Enter the message: ", msg);
    printf(msg);
}
void prompt(char *p, char *msg)
{
    printf(p);
    gets(msg);
}
