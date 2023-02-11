#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[1000], num[1000];

    int T, i, k, n, check,m, h, j, len;

    scanf("%d", &T);
    getchar();
    for(m=1; m<=T; m++){

        gets(str);
        len = strlen(str);
        printf("Case %d: ", m);
        for(i=0; i<len; i++){
            k = 0;
            j = i;
            while(!isalpha(str[i])){
                num[k] = str[i];
                k++;
                i++;
            }
            num[k] = '\0';
            n = atoi(num);
            for(h=0; h<n; h++){
                printf("%c", str[j-1]);
            }
        }
        printf("\n");
    }
    return 0;
}
