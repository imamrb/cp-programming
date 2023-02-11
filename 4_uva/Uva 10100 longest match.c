#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[1001], str2[1001];
    int t, i, j,max,count,test=1,m;

    while(gets(str) && gets(str2)){
        if(str[0]=='\0' || str2[0]=='\0') {
            printf("%d. Blank!\n", test++);
            continue;
        }
        for(i=0; str[i]; i++){
            if(!isalpha(str[i]) && !isdigit(str[i]-48))
                str[i] = ' ';
        }
        for(j=0; str2[j]; j++){
            if(!isalpha(str2[j] && !isdigit(str2[j]-48)))
               str2[j] = ' ';
        }
        m = 0;
        count = 0;
        for(i=0; str[i]; i++){
            if(!isalpha(str[i-1]) && !isdigit(str[i-1]-48)){
                for(j=m; str2[j]; j++){
                    if(!isalpha(str2[j-1]) && !isdigit(str2[j-1]-48) && str[i]==str2[j]){
                        while(str[i]==str2[j]){
                            ++i;
                            ++j;
                            if(!isalpha(str[i]) && !isdigit(str[i]-48) && str[i-1]==str2[j-1]){
                                ++count;
                                m = j;
                            }
                            if(str[i]=='\0' || str2=='\0') break;
                        }
                    }
                }
            }
        }
        printf("%d.  Length of longest match: %d\n", test++, count);
    }
}
