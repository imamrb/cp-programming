#include <bits/stdc++.h>
using namespace std;

double power(double m, int n=2)
{
    double result=1;
    for(int i=1; i<=n; i++){
        result*=m;
    }
    return result;
}
int main()
{
    double m, result,result2;
    int n;
    cin>>m>>n;
    result = power(m, n);
    result2 = power(m);
    printf("%.2lf to the power %d = %.2lf\n", m, n, result);
    printf("When n is omitted: %.2lf to the power %d = %.2lf\n", m, n=2, result2);

    return 0;
}
