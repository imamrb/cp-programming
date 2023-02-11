#include <stdio.h>
#include <string.h>

int main()
{
    char words[]="abcdefghijklmnopqrstuvwxyz";
    char str[110];
    int T,len,i,j,n,count, pos, defult;

    scanf("%d", &T);
    len = strlen(words);

    getchar();
    for(n=1; n<=T; n++){
        gets(str);
        count = 0;
        for(i=0; str[i]; i++){

            if(str[i]==' ') ++count;
            else{
                pos = 0;
                defult=3;
                for(j=0; j<len; j++){
                    ++pos;
                    if(words[j]=='p' || words[j]=='w') defult = 4;
                    if(str[i]==words[j]){
                        count+=pos;
                        break;
                    }
                    if(pos==defult) pos = 0;
                    if(words[j]=='s') defult = 3;
                 }
            }
        }
        printf("Case #%d: %d\n", n, count);
    }
    return 0;
}
