#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a, b ,n,m, T, j, k,i, r;
    char str[100], part1[100], part2[100];

    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &a, &b);

        for(i=a; i<=b; i++){
            k = a*a;
            i = 0;
            while(k){
                r = k%10;
                k/=10;
                str[i] = r;
                ++i;
            }
            k = strlen(str);
            i = k/2;
            if(k%2==0) {
            for(j=0; j<k; j++){
                if(j<i)
                part1[j] = str[j];
                else{
                    k = j-i/2;
                    part2[k] = str[j];
                }
            }
            printf(part1);
            }
        }
    }
}
