#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N, a, b, x, y, len, n, num1, num2,num3, i, k, S,check;
    char part1[20], part2[20], part3[20], str[20];

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d %d", &a, &b);

        printf("case #%d\n", i);
        check = 0;
        for(n=a; n<=b; n++){
            S = n*n;
            sprintf(str, "%d", S);
            len = strlen(str);
            x = 0;
            y = 0;
            for(k=0; k<len; k++){
                if(k<len/2) {
                    part1[x] = str[k];
                    ++x;
                }
                else {
                    part2[y] = str[k];
                    ++y;
                }
            }
            part1[x] = part2[y] = '\0';
            num1 = atol(part1);
            num2 = atol(part2);
            if(num1+num2==n) {
                    printf("%d\n", n);
                    check = 1;
            }
            else if(part1[x-1]=='0'){
                while(part1[x-1]=='0'){
                    --x;
                    part1[x] = '\0';
                    num1 = atol(part1);
                    if(num1+num2==n) {
                        printf("%d\n", n);
                        check = 1;
                    }
                }
            }
        }
        if(!check) printf("no kaprekar numbers\n");
        if(i<N) printf("\n");
    }
    return 0;
}
