#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], str2[1000];
    char valid[22]={"AEHIJLMOSTUVWXYZ12358"};
    char reverse[22]={"A3HILJMO2TUVWXY51SEZ8"};
    int i, j, len, s , checkP, k, checkM, check;

    while(gets(str)){
        for(i=0; str[i]; i++){
            printf("%c", str[i]);
            if(str[i]=='0') str[i] = 'O';
        }
        /*Checking if its a palindrome*/
        len = strlen(str);
        s = len - 1;
        checkP=1;
        for(i=0; i<len/2; i++){
            if(str[i]==str[s-i])
                checkP = 1;
            else {
                checkP = 0;
                break;
            }
        }
        /*Checking if its a mirroed string*/
        k = 0;
        for(i=0;i<len; i++){
            for(j=0; valid[j]; j++){
                check = 0;
                if(str[i]==valid[j]){
                    str2[k] = reverse[j];
                    ++k;
                    check = 1;
                    break;
                }
            }
            if(!check) break;
        }
        checkM = 1;
        if(check){
            for(i=0; i<len/2; i++){
                if(str[i]==str2[s-i])
                    checkM = 1;
                else {
                    checkM = 0;
                    break;
               }
           }
        }
        else checkM = 0;

       printf(" -- ");
       if(checkP && checkM) printf("is a mirrored palindrome.\n");
       else if(checkP && !checkM) printf("is a regular palindrome.\n");
       else if(!checkP && checkM) printf("is a mirrored string.\n");
       else printf("is not a palindrome.\n");
       printf("\n");
    }
    return 0;
}
