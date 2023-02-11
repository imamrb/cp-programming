#include <stdio.h>

int main()
{
    int F, A, i, j, k, count, T, n;

    scanf("%d", &T);
    for(n=1; n<=T; n++){
        scanf("%d %d", &A, &F);
        for(i=1; i<=F; i++){
            count = 1;
            for(j=1; count<=A*2-1; ){
                for(k=1; k<=j; k++){
                    printf("%d",j);
                }
                if(count>=A) --j;
                else ++j;

                ++count;
                printf("\n");
            }
           if(i<F) printf("\n");
        }
        if(n<T) printf("\n");
    }
    return 0;
}
