#include <stdio.h>

int main()
{
    int n, u, d, climb, min;

    while(scanf("%d %d %d", &n, &u, &d) && n!=0){
        min = 0;
        climb = 0;
        while(climb<n){
            climb += u;
            ++min;
            if(climb<n) {
                climb -= d;
                ++min;
            }
            else break;
        }
        printf("%d\n", min);
    }
    return 0;
}
