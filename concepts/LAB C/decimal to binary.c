#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d",&n);

    for(i=15; i>=0; i--){
        printf("%d",n>>i & 1);
    }

    return 0;
}
