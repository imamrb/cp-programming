#include <stdio.h>

int prompt(char *msg, int *num);

int main()
{
    int n;
    while(prompt("Enter a number: ", &n)!=EOF){
        printf("The number enterd is: %d\n", n);
    }
    return 0;
}
int prompt(char *msg, int *num)
{
    printf(msg);
    scanf("%d", num);
}
