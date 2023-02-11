#include <stdio.h>

int main()

{
    char str[10005], word[10000];
    double paid[10000];
    double money;
    int i , j, N, K,k,M;

    scanf("%d", &N);
    while(N--){
        scanf("%d", &K);
        for(i=0; i<K; i++){
            getchar();
            scanf("%c %lf", &word[i], &paid[i]);
        }
        scanf("%d", &M);
        getchar();
        money = 0.0;
        for(j=0; j<M; j++){
            gets(str);
            for(k=0; str[k]!='\0'; k++) {
                for(i=0; i<K; i++){
                    if(str[k]==word[i]){
                       money += paid[i];
                       break;
                    }
                }
            }
        }
      printf("%.2lf$\n", (money/100));
    }
    return 0;
}
