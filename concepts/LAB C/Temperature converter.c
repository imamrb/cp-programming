#include <stdio.h>
#include<conio.h>

int main()
{
    float temp, c, f ;
    int choice;

    printf("What do u want to do?\n");
    printf("1. Celsius to farenhite\n2.Farenhite to Celsius\n");
    printf("Enter ur choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);

        f = (9*c)/5+32;

        printf("%.3f", f);
    }
    else if(choice == 2){

        printf("Enter your temperature in Farenhite: ");
        scanf("%f", &f);

        c = (float)5/9*(f-32);

        printf("%.3f", c);
    }
}
