#include <stdio.h>

int main()
{
    int n , x , i, j, t1 =0 , t2 =1, display, count=2;

    printf("Enter the nTh term to be calculate: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d %d ", t1, t2);
    do {
        display = t1 + t2;
        t1 = t2;
        t2 = display;
        ++count;
        printf("%d ", display);
    } while (count<n);
}
