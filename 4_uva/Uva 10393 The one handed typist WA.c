#include <stdio.h>
#include <string.h>

void sorting(int f, char sort[][51]);
int main()
{
    char do_type[1010][51],sort[1010][51];
    char word[51], can_type[125];
    int N, F,f, m, i, j, check, len , max;

    while(scanf("%d %d", &F, &N)==2){

        char touch[10][10]={"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};

        while(F--){
            scanf("%d", &f);
            strcpy(touch[f-1],"\0");
        }
        for(i=0; i<=122; i++)
            can_type[i] = 0;
        for(i=0;i<10;i++){
            for(j=0; touch[i][j]; j++){
                can_type[touch[i][j]] = 1;
            }
        }
        getchar();
        j = 0;
        max = 0;
        while(N--){
            gets(word);
            len = strlen(word);
            if(len>=max){
                check = 1;
                for(i=0; word[i]; i++){
                    if(can_type[word[i]]==0){
                        check = 0;
                        break;
                    }
                }
                if(check){
                    strcpy(do_type[j++],word);
                    max = len;
                }
            }
        }
        f = 0;
        for(i=0; i<j; i++){
            len = strlen(do_type[i]);
            if(len==max)
                strcpy(sort[f++],do_type[i]);
        }

        sorting(f, sort);

        m = f;
        for(i=1; i<m; i++){
            if(strcmp(sort[i-1], sort[i])==0){
                --f;
                strcpy(sort[i], "\0");
            }
        }
        printf("%d\n", f);
        for(i=0; i<m; i++){
            if(strcmp(sort[i],"\0")!=0)
                printf("%s\n", sort[i]);
        }
    }
    return 0;
}
void sorting(int f, char sort[][51])
{
    int i,j;
    char temp[51];
    for(i=0; i<f; i++){
        for(j=f-1; j>i; j--){
            if(strcmp(sort[i], sort[j])>0){
                strcpy(temp, sort[i]);
                strcpy(sort[i], sort[j]);
                strcpy(sort[j], temp);
            }
        }
    }
    return;
}
