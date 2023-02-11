#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char ch;
    int count = 0;
    do{
        ch = getch();
        if(count%2==0) ch = toupper(ch);
        else ch = tolower(ch);
        putchar(ch);
        ++count;
    }while(ch!='\n');

    return 0;
}
