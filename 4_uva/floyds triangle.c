#include <stdio.h>

int main()
{
    int rows , i, j, m=1, x;

    scanf("%d", &rows);

    for(i=1 ; i<=rows; i++) {
        for(j = i; j>=1; j--) {
            if(j%2==0) x = 0;
            else x = 1;
            printf("%d ", x);
        }
        putchar('\n');
    }
    return 0;
}
