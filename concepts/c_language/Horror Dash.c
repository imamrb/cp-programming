#include <stdio.h>

int main()
{
    int T, N, speed, clown_speed,i,n;

    scanf("%d", &T);
    for(n=1; n<=T; n++){
        scanf("%d", &N);
        clown_speed = 0;
        for(i=0; i<N; i++){
            scanf("%d", &speed);
            if(speed>=clown_speed)
                clown_speed = speed;
        }
        printf("Case %d: %d\n", n, clown_speed);
    }
    return 0;
}
