#include <stdio.h>

int main()
{
    int N, T, high, low, i, n;
    int walls[50];

    scanf("%d", &T);
    for(n=1; n<=T; n++){
        scanf("%d", &N);
        for(i=0; i<N; i++){
            scanf("%d", &walls[i]);
        }
        high = 0; low = 0;
        for(i=0; i<N-1; i++){
            if(walls[i]<walls[i+1]) ++high;
            else if(walls[i]>walls[i+1]) ++low;
        }
        printf("Case %d: %d %d\n", n, high, low);
    }
    return 0;
}
