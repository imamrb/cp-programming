#include <stdio.h>

int main()
{
    char ch;
    int i, check ;
    char str[100]={"qwertyuiop[]asdfghjkl;'zxcvbnm,./"};
    while((ch=getchar())!=EOF){
        check = 0;
        for(i=0; str[i]; i++){
            if(tolower(ch)==str[i]){
                printf("%c", str[i-2]);
                check = 1;
            }
        }
        if(!check) printf("%c", ch);
    }
    return 0;
}
