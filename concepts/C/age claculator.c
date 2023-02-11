#include <stdio.h>

int main()
{
    int date1 , month1, year1 ;
    int date2 , month2 , year2;
    int day, month, year,temp;

    printf("Enter your date birth: \n");
    printf("\tDay: ");
    scanf("%d", &date1);
    printf("\tMonth: ");
    scanf("%d", &month1);
    printf("\tYear: ");
    scanf("%d", &year1);

    printf("Enter todays date: ");
    printf("\n\t Day: ");
    scanf("%d", &date2);
    printf("\t Month: ");
    scanf("%d", &month2);
    printf("\tYear: ");
    scanf("%d", &year2);
    if(date2<date1) {
        temp = date1;
        date1 = date2 ;
        date2 = temp; ;
    }
    if (month2<month1) {
        temp = month1;
        month1 = month2;
        month2 = temp;
    }

    day = date2-date1;
    month = month2-month1;
    year = year2-year1;

    printf("\nYou are %d Year %d Month & %d days old\n", year, month, day);

    return 0;

}
