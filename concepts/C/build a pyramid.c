#include <stdio.h>
#include <conio.h>

int main()
{
    int x , rows, i, j,y;

    scanf("%d", &rows);
    for(i=0; i<=rows; i++) {
            gotoxy(x, y+1);
        for(j=0-i; j<=i; j++) {
            printf("%3d ", abs(j));

        }
          x = x-3;
        putchar('\n');
    }
    return 0;
}
