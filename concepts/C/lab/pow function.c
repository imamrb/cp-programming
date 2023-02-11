#include<stdio.h>
#include<math.h>

int main()
{
    int x, y;
    printf("X= ");
    scanf("%d", &x);
    printf("Y= ");
    scanf("%d", &y);

    printf("%d to the power %d = %0.f", x , y, pow(x,y));
}
