#include <bits/stdc++.h>
using namespace std;

double area(double length, double height)
{
    double result = 0.5*length*height;
    return result;
}
double area(double radius)
{
    double result = 3.1416*radius*radius;
    return result;
}
int main()
{
    double length, height, radius, result;
    int choice;

    printf("What do you want to compute?\n\t1.Triangle\n\t2.Circle\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if(choice==1){
        printf("Enter length and height of the triangle:\n");
        scanf("%lf %lf", &length, &height);
        result = area(length, height);
    }
    else{
        printf("Enter the radius of the circle:\n");
        scanf("%lf", &radius);
        result = area(radius);
    }

    printf("The computed area: %.3lf\n", result);

    return 0;
}
