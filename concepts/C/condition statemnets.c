#include <stdio.h>

int main()
{
    int num;
    char x[30];
    scanf("%d", &num);

    x[100] =( (num%2==0) ? "Number is Even" : "Number is Odd" );

    printf("%s\n", x);
}
