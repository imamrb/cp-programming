#include <stdio.h>

int main()
{
    int T, N, P, Q, i, n, j, k;
    int Total_weight, count;
    int weights[30];

    scanf("%d", &T);

    for(n=1; n<=T; n++){
        scanf("%d %d %d", &N, &P, &Q);
        for(i=0; i<N; i++){
            scanf("%d", &weights[i]);
        }
        Total_weight = 0;
        count = 0;
        j = 0;
        for(k=1; k<=P; k++){
            Total_weight+=weights[j];
            if(Total_weight>Q) break;
            else ++count;
            ++j;
            if(j==N) break;
        }
        printf("Case %d: %d\n", n, count);
    }
    return 0;
}
