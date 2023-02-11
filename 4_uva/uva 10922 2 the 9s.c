#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int i, sum, degree;

    while(gets(str)){
        if(strcmp(str,"0")==0) break;
        else {
            sum = 0;
            for(i=0; str[i]; i++){
                sum+=str[i]-48;
                printf("%c", str[i]);
            }
            if(sum%9==0){
                degree = 1;
                while(sum!=9){
                    sprintf(str, "%d" , sum);
                    sum = 0;
                    for(i=0; str[i]; i++){
                       sum+=str[i]-48;
                    }
                    ++degree;
                }
                printf(" is a multiple of 9 and has 9-degree %d.\n", degree);
            }
            else printf(" is not a multiple of 9.\n");
        }
    }
    return 0;
}
