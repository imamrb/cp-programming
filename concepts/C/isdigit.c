#include <stdio.h>

int main()
{
    char ch;

    while(ch=getche()){
        printf("\nAscii of %c is %d : ", ch, ch);
        if(isdigit(ch)) printf("And its a digit\n");
        else printf("And its not a digit\n");
    }
    return 0;
}
