#include <stdio.h>
#include <conio.h>

int main()
{
    int num , ldigit, sum = 0;



    scanf("%d", &num);
    while(num) {
        ldigit = num % 10;
        num = num / 10;
        sum +=ldigit;
        printf("%d", ldigit);
    }
        printf("\n%d", sum);

        return 0;
}
