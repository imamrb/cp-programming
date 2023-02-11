#include <stdio.h>

int main()
{
    char str[1000], word[1000];
    int i, j, k;

    while(gets(str)){
        j = 0;
        for(i=0; str[i]; i++){
            if(str[i]!=' '){
                word[j] = str[i];
                ++j;
            }
            else {
                for(k=j-1; k>=0; k--){
                    printf("%c", word[k]);
                }
                printf(" ");
                j = 0;
            }
        }
        for(k=j-1; k>=0; k--){
            printf("%c", word[k]);
        }
        printf("\n");
    }
    return 0;
}
