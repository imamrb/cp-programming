#include<stdio.h>

int main()
{
    int x, row=6, j, i,k;

    for(i=row; i>0; i--) {
         for(k=row-i; k>0; k--) {
            printf("  ");
        }
        for(j=i; j>0; j--) {
            printf("* ");
        }

        putchar('\n');
    }

    return 0;
}
