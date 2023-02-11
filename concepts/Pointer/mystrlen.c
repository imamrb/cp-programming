#include <stdio.h>

int main()
{
    char str[100];
    int len;
    gets(str);
    len = mystrlen(str);
    printf("%d\n", len);
}
int mystrlen(char *p)
{
    int count=0;
    while(*p){
        ++count;
        p++;
    }
    return count;
}
