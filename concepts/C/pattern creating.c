#include <stdio.h>

int main()
{
    int N,i , j , x;
    scanf("%d", &N);
    printf("\n");

    for(i=1; i<=N; i++) {
        for(j=i; j>=1; j--) {
            if(j%2==0) x=0;
            else x = 1;
            printf("%d", x);
        }
        printf("\n");
    }
    return 0;
}
