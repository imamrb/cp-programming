#include <stdio.h>

int main()
{
    int num;
    char r[80], answer[80];

    printf("What are you doing ?\n");
    printf(" 1. Facebook \n 2. Clash of clans\n 3. Clash of royal\n 4. Browsing\n ");
    printf("5. Study\n 6. Prem\n");
    printf("Enter the number: ");
    scanf("%d",&num);

    switch(num) {
    case 1:
        printf("You fucking bullshit\n Fuck u bitch ");
        goto reply;
    case 2:
        printf("Ei bal khele ki lav,ara! Ei bal raikha porte boi , kame dibo :P  ");
        goto reply;
    case 3:
        printf("Same sona ! ");
        goto reply;
    case 4:
        printf("Tikh ase somossa nai , but bala site browse korbi ,koi dilam");
        goto reply;
    case 5:
        printf("umm baby ta , carry on ,i am going, dont wanna disturb ");
        goto reply;
    case 6:
        printf("LOl , i know u dont have a girlfried , its all ur imagination :p\n");
        printf("come to real life bro :p");
        goto reply;
    }
        reply:
        {
        printf("\nWanna say something?");
        scanf("%s", r);
        if(r =='Yes'||'yes') {
            printf("Huhh what do you want to say? write: ");
            scanf("%s", answer);
            printf("Ok , tikh ase , bala thak");
        }
        if(r == 'No' || 'no') {
            printf("You dont need to say anything bro ! ");
            printf("Goodbye");
        }
        return 0;
        }
}
