#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100][30], s2[100][30], p1[100];
    int i, j, N, Q;
    scanf("%d", &N);
    getchar();
    for(i=0; i<N; i++){
        gets(s1[i]);
        gets(s2[i]);
    }
    scanf("%d", &Q);
    getchar();
    for(j=0; j<Q; j++){
        gets(p1);
        for(i=0; i<N; i++){
            if(strcmp(p1,s1[i])==0){
                printf("%s\n", s2[i]);
            }
        }
    }
    return 0;
}
