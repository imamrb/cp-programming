/*Smiley*/

#include <stdio.h>

int main()
{
    int i,m,n ;
    char str[80];

`    while (gets()!=EOF){
        gets(str);
        for (i=0; str[i]; i++) {
            if(str[i]==32) continue;
            else if(str[i]>=97) {
                    str[i] = str[i] -32;
            }
            m = i;
            break;
        }
        for(i=m+1; str[i]; i++) {
            if(str[i]==32) continue;
            else if(str[i]>=65 && str[i]<=122) {
                if(str[i]>=97 && str[m]>=97 ) {
                    str[i] = str[i] - 32;
                }
                else if(str[i]<97 && str[m]<97 ) {
                    str[i] = str[i] +32;
                }
                m = i;
            }
        }
        for(i=0; str[i]; i++) {
            printf("%c", str[i]);
        }
       printf("\n");
    }
    return 0;
}
