#include <stdio.h>
#include <string.h>
void sorting(int k, char type[][51]);
int capability(char Ex[], char str[]);
void sorting(int k, char type[][51])
{
    int i,j;
    char temp[51];
    for(i=0; i<k; i++){
        for(j=k-1; j>i; j--){
            if(strcmp(type[i], type[j])>0){
                strcpy(temp, type[i]);
                strcpy(type[i], type[j]);
                strcpy(type[j], temp);
            }
        }
    }
    return;
}
int capability(char Ex[], char str[])
{
    int i,j,check = 0;
    for(i=0; str[i]; i++){
        if(islower(str[i])){
            for(j=0; Ex[j]; j++){
                if(str[i]==Ex[j]){
                    check = 1;
                    break;
                }
            }
        }
    }
    return check;
}
int main()
{
    char touch[11][10]={"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};
    char Ex[100],str[51], word[51], type[1100][51],do_type[1100][51];
    int N, F, f, n, m, r, i, j, k, max;
    while(scanf("%d %d", &F, &N)!=EOF){
        strcpy(Ex, "\0");
        for(i=1; i<=F; i++){
            scanf("%d", &f);
            strcat(Ex,touch[f-1]);
        }
        getchar();
        max = 0;
        k = 0;
        for(n=0; n<N; n++){
            gets(word);
            r = capability(Ex, word);
            if(r==0) {
                strcpy(type[k++], word);
                if(strlen(word)>max)
                    max = strlen(word);
            }
        }
        j = 0;
        for(i=0; i<k; i++){
            if(strlen(type[i])==max)
                strcpy(do_type[j++], type[i]);
        }
        sorting(j, do_type);
        m = j;
        for(i=1; i<m; i++){
            if(strcmp(do_type[i-1], do_type[i])==0){
                do_type[i][0] = '\0';
                --j;
            }
        }
        printf("%d\n", j);
        for(i=0; i<m; i++){
            if(do_type[i][0]!='\0')
                puts(do_type[i]);
        }
    }
    return 0;
}
