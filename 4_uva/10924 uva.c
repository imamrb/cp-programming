#include <stdio.h>
#include <math.h>
int main()
{
    char word[30];
    int i, sum, check, j;

    while(gets(word)){
        sum = 0;
        check = 0;
        for(i=0; word[i]; i++){
            if(islower(word[i])){
                sum += word[i] - 96;
            }
            else if(isupper(word[i])){
                sum += word[i] - 38;
            }
        }
        for(j=2; j<=sqrt(sum); j++){
            if(sum%j==0){
                check = 1;
                break;
            }
        }
        if(check == 0) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
