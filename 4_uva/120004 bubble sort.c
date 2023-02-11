#include <stdio.h>

int findSwaps(int n);

int main()
{
    int T, t, a, N, i, j, total, av, m;
    int swaps[100000];

    scanf("%d", &T);
    for(t=1; t<=T; t++){
        scanf("%d", &N);
        total = 0;
        for(a=0; a<N; a++){
            swaps[a] = findSwaps(a+1);
            total+=swaps[a];
        }
        av = total/N;
        m = av;
        printf("%d\n", total);
    }
}
int findSwaps(int n)
{
    int count = 0, i, j, temp, b[100000];
    for(i=0; i<n; i++){
        b[i] = n - i;
    }
    for(i = 0; i<n; i++ ) {
        for( j = 0; j<n - 1; j++ ) {
            if( b[j] > b[j+1] ) {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                count++;
            }
        }
    }
    return count;
}
