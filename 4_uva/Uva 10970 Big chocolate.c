#include <stdio.h>

int main()
{
    int N, M, cuts;

    while(scanf("%d %d", &N, &M)!=EOF){
        cuts = (N-1)+(N*(M-1));
        printf("%d\n", cuts);
    }
    return 0;
}
