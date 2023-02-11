#include <stdio.h>

int main()
{
    int T, f;
    int size,animals,parameter;
    float perspace, money,budget;
    while(scanf("%d", &T)!=EOF) {
        while(T--){
            scanf("%d", &f);
            budget=0;
            while(f--){
                money = 0.0;
                scanf("%d %d %d", &size, &animals, &parameter);
                perspace = (float) size/animals;
                money = (perspace*parameter*animals);
                budget+= money;
            }
            printf("%.0f\n", budget);
        }
    }
    return 0;
}
