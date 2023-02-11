#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char str[10000], pstr[10000];
    int T, i, j, check, s, len, n, k, root;

    scanf("%d", &T);
    getchar();
    for(n=1; n<=T; n++){
        gets(pstr);
        k = 0;
        for(i=0; pstr[i]; i++){
            if(isalpha(pstr[i])){
                str[k] = pstr[i];
                ++k;
            }
        }
        str[k] = '\0';
        len = strlen(str);
        root = sqrt(len);
        check = 1;
        if(root*root==len){
            s = len - 1;
            for(j=0; j<len/2; j++){
                if(str[j]!=str[s-j]){
                    check = 0;
                    break;
                }
            }
        }
        else check = 0;

        if(check) printf("Case #%d:\n%d\n",n,root);
        else printf("Case #%d:\nNo magic :(\n", n);
    }
    return 0;
}
