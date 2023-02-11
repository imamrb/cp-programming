#include<stdio.h>

int main()
{
    int n,i,j;

    printf("How many lines : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++)
            printf("  ");
        for(j=1; j<=i; j++)
            printf("%4d", i);
        printf("\n");
    }
}
