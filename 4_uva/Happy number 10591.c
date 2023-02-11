#include <stdio.h>

int main()
{
    long int N, sum, m, r;
    int T, n;

    scanf("%d", &T);
    for(n=1; n<=T; n++){
        scanf("%ld", &N);
        m = N;
        while(1){
            sum = 0;
            while(m){
                r = m % 10;
                m/=10;
                sum += r*r;
            }
            if(sum == 1){
                printf("Case #%d: %ld is a Happy number.\n", n, N);
                break;
            }
            else if(sum==4 || sum == N){
                printf("Case #%d: %ld is an Unhappy number.\n", n, N);
                break;
            }
            else m = sum;
        }
    }
    return 0;
}
