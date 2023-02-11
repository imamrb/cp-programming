/*3.4:
  Write a program to evaluate the following investment equation
  V = P(1+r)^n;
  and prdouble the tables which will give the value of V for various combination of
  the following values of P, r, and n;

  P: 1000, 2000, ,,,,, 10000
  r: 0.10, 0.11, ,,,,, 0.20
  n: 1, 2, 3, ,,,,,, 10;
  P-> principal amount;
  v-> value of the money at the end of n years;

  V = P(1+r);
  P = V;

*/

#include <bits/stdc++.h>
using namespace std;
//
//double value(double P, double r, int n)
//{
//    double V;
//    if(n==0) return P;
//    V = P + P*r;
//
//    value(V, r, n-1);
//}
int main()
{
    double r, V, P, p, temp;
    int n, i;

    for(p=1000; p<=10000; p+=1000){
        P = p;
        for(r=0.10; r<=0.20; r+=.01){
            V = P + P*r;
            printf("Principal\t\tInterest\tYear\tValue\n");
            printf("%.2lf\t\t%.2lf\t\t%d\t\t%.2lf\n", P, r, i=1, V);
            for(i=2; i<=10; i++){
                temp = V;
                V += V;
                printf("%0.2lf\t\t%.2lf\t\t%d\t\t%.2lf\n", temp, r, i, V);
            }
            printf("\n\n");
        }
        printf("\n\n");
    }

    return 0;
}
