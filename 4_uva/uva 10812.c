#include <stdio.h>

int main()
{
    int n, s, d, t, a, b;

    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &s, &d);
        if(s<d) printf("impossible\n");
        else {
            t = s+d;
            if(t%2!=0) printf("impossible\n");
            else {
                a = t/2;
                b = s - a;

                printf("%d %d\n", a, b);
            }
        }
    }
    return 0;
}
