//Implementation of EUCLID algorithm for finding GCD...
// GCD(a*b) x LCM(a*b) = |a*b|
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, gcd, lcm;

    printf("Enter the two numbers: \n");
    while(scanf("%d %d", &a, &b)==2){
        gcd = GCD(a, b);
        printf("GCD of %d & %d is: %d\n", a, b, gcd);
        lcm = abs(a*b)/gcd;
        printf("LCM of %d & %d is: %d\n", a, b, lcm);
    }
}
int GCD(int a, int b)
{
    int temp, r;
    if(a<b){
        temp = a;
        a = b;
        b = temp;
    }
    while(a % b !=0){
        temp = a%b;
        a = b;
        b = temp;
    }
    return b;
}
