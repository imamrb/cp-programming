#include <stdio.h>

int main()
{
    int T, n1, n2, i, j, k, x, r, n, l, y, check;
    int r1[100], r2[100], s[100];

    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d", &n1, &n2);

        j = 0;
        while(n1) {
            r = n1%10;
            n1 = n1/10;
            r1[j] = r;
            ++j;
        }
        k = 0;
        while (n2) {
           r = n2 % 10;
           n2 = n2/10;
           r2[k] = r;
           ++k;
        }
        n = 0;
        check = 0;
        for(x=0; x<j; x++) {
            for (y=0; y<k; y++) {
                if (r1[x] == r2[y] && r1[x]!=s[n-1]) {
                    s[n] = r1[x];
                    check = 1;
                    ++n;
                }
            }
        }
        if(!check){
            printf("N");
        }
        else {
            for(l=0; l<n; l++) {
                printf("%d", s[l]);
            }
        }
       printf("\n");
    }
    return 0;
}
