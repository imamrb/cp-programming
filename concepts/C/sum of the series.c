#include<stdio.h>

int main()
{
    int n, i, count= 1, sum = 0;

    scanf("%d", &n);

    for(i=1; count<=n; i+=2){
        sum = sum + i*i;
        count++;
    }
    printf("Sum of the series : %d", sum );
}
