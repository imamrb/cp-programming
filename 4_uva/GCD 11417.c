#include <stdio.h>

int main()
{
    int N, i, j, G;

    while(scanf("%d", &N) && N){
        G = 0;
        for(i=1; i<N; i++){
            for(j=i+1; j<=N; j++){
                G+=GCD(i,j);
            }
        }
        printf("%d\n", G);
    }
    return  0;
}
int GCD(int n, int m)
{
    int temp;
    while(m){
        temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}
