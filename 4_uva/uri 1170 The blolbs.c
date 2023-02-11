#include <stdio.h>

int main()
{
    int N, i;
    float X;
    scanf("%d", &N);

    for(i=1; i<=N; i++) {
        scanf("%f", &X);
        int dias = 0;
        while(X>1.0) {
            X = X/2.0;
            ++dias;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}
