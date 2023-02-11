#include <stdio.h>
#include <string.h>
int main()
{
    char slogan1[100][100];
    char slogan2[100][100];
    char part1[100][100];
    int N, T, i,k;

    scanf("%d", &N);
    getchar();
    for(i=0; i<N; i++) {
        gets(slogan1[i]);
        gets(slogan2[i]);
    }
    scanf("%d", &T);
    getchar();
    for(k=0; k<T; k++) {
        gets(part1[k]);
    }
    for(k=0; k<T; k++) {
        for(i=0; i<N; i++) {
            if(strcmp(part1[k],slogan1[i])==0){
                    printf("%s\n", slogan2[i]);
                    break;
            }
        }
    }
    return 0;
}
