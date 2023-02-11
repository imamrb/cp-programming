#include <stdio.h>

int main()
{
    int height[100];
    int set, i, wall, bricks, num =0, moves,k ;

    while(scanf("%d", &set)==1 & set!=0){
        bricks = 0;
        for(i=0; i<set; i++){
            scanf("%d", &height[i]);
            bricks +=height[i];
        }
        wall = bricks/set;
        moves = 0;
        for(i=0; i<set; i++){
            while(height[i]>wall){
                --height[i];
                ++moves;
            }
        }
        printf("Set #%d\n", ++num);
        printf("The minimum number of moves is %d.\n\n", moves);
    }
    return 0;
}
