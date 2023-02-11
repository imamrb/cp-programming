#include <stdio.h>

int main()
{
    int N, i, j=1, count, sum ;

    while(scanf("%d", &N) && N>=0){
        sum = 1;
        i = 1;
        count = 0;
        while(sum<N){
            sum+=i;
            i = i + i;
            ++count;
        }
        printf("Case %d: %d\n", j++, count);
    }
    return 0;
}
