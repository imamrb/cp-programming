#include <stdio.h>
#include <string.h>
#define Size 1000
int main()
{
    char str[Size], string[Size], palin[Size];
    int i, j, k, len;

    while(gets(str)){
        if(strcmp(str, "DONE")==0) break;
        else {
            len = strlen(str);
            j = 0;
            for(i=0; i<len; i++){
                if(isalpha(str[i])){
                    string[j] = tolower(str[i]);
                    ++j;
                }
            }
            string[j] = '\0';
            k = 0;
            for(i=len-1; i>=0; i--){
                if(isalpha(str[i])){
                    palin[k] = tolower(str[i]);
                    ++k;
                }
            }
            palin[k] = '\0';

            if(strcmp(string, palin)==0) printf("You won't be eaten!\n");
            else printf("Uh oh..\n");
        }
    }
    return 0;
}
