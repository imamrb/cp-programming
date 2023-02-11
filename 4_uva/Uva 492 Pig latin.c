#include <stdio.h>
#include <ctype.h>

int main()
{
    char copy, ch, w;
    int i;

    while((w=getchar())!=EOF){
        ch = toupper(w);

        if(ch=='A' || ch == 'E' || ch=='I' || ch == 'O' || ch=='U'){
            while(isalpha(w)){
                printf("%c", w);
                w = getchar();
            }
            printf("ay");
            printf("%c", w);
        }
        else if(isalpha(w)) {
            copy = w;
            w = getchar();
            while(isalpha(w)){
                printf("%c", w);
                w = getchar();
            }
            printf("%cay", copy);
            printf("%c", w);
        }
        else printf("%c", w);
    }
    return 0;
}

