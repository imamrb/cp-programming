#include <stdio.h>
#include <string.h>
#define Max 50001

long int chimps[Max];
long int query[Max];
int main()
{
    long int N, Q, i, j, max,min, check, check2;
    memset(chimps , 0, sizeof(chimps));
    memset(query, 0 , sizeof(query));
    scanf("%ld", &N);
    for(i=0; i<N; i++){
        scanf("%ld", &chimps[i]);
    }
    scanf("%ld", &Q);
    for(j=0; j<Q; j++){
        scanf("%ld", &query[j]);
    }
    for(j=0; j<Q; j++){
        check = 0;
        check2 = 0;
        for(i=0; i<N; i++){
            if(chimps[i]<query[j]){
                min = chimps[i];
                check = 1;
                continue;
            }
            else if(chimps[i]>query[j]){
                max = chimps[i];
                check2 = 1;
                break;
            }
        }
        if(check) printf("%ld ", min);
        else printf("X ");
        if(check2) printf("%ld\n", max);
        else printf("X\n", max);
    }
    return 0;
}
