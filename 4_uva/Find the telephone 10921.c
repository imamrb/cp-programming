#include <stdio.h>
#include <string.h>
int main()
{
    char phone[9][5]={"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    char str[31], copy[5];
    int i , j, k;

    while(gets(str)){
        for(i=0; str[i]; i++){
            if(isalpha(str[i])){
                for(k=0; k<8; k++){
                    strcpy(copy, phone[k]);
                    for(j=0; copy[j]; j++){
                        if(copy[j]==str[i]){
                            printf("%d", k+2);
                        }
                    }
                }
            }
            else printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
