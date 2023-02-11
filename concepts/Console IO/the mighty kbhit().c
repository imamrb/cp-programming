#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    double amount;
    amount = 20.0;

    printf("Printing 5-percent tax table \n\r");
    printf("Press a key to stop.\n\r");

    do{
        printf("Amoutn: %f, tax: %f\n\r", amount, amount*0.05);
        if(kbhit()) break;
        amount = amount + 0.20;
    }while(amount<1000.0);

    return 0;
}
