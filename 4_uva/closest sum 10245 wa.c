#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double arr[10010][2];
    double d, a, b, c, min;
    int N, i;

    while(scanf("%d", &N) && N){
        for(i=0; i<N; i++){
            scanf("%lf %lf", &arr[i][0], &arr[i][1]);
        }
        a = (arr[1][0] - arr[0][0]);
        b = (arr[1][1] - arr[0][1]);
        min = a*a + b*b;
        for(i=2; i<N; i++){
            a = (arr[i][0] - arr[i-1][0]);
            b = (arr[i][1] - arr[i-1][1]);
            c = a*a + b*b;
            if(c<min) min = c;
        }
        d = sqrt(min);
        if(d<10000) printf("%.4lf\n", d);
        else printf("INFINITY\n");
    }
    return 0;
}
