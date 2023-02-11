#include <stdio.h>
#include <string.h>
#define Max 1000001

int arr[Max];
char stolen[Max];

int main()
{
    int N, n, i, count, total, star ;

    scanf("%d", &N);
    total = 0;
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
        total +=arr[i];
    }
    i = 0;
    count = 0;
    star = 0;
    memset(stolen, 0 , sizeof(stolen));
    while(i && i<N){
        n = arr[i];
        if(n>0){
            --arr[i];
            ++count;
        }
        if(stolen[i]==0) ++star;
        if(n==0) break;
        stolen[i] = 1;
        if(n%2) ++i;
        else --i;
    }
    printf("%d %d\n", star, total-count);

    return 0;
}
