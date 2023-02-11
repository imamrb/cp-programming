#include<stdio.h>

int main()
{
    int N, i, j,c;

    printf("Enter line number :");
    scanf("%d", &N);

    for(i=1; i<=N; i++){
        c = 1;
        for(j=1; j<=i; j++){
            c = c*(i-j+1)/j;
            printf("%4d", c);
        }
        printf("\n");
    }
    return 0;
}
