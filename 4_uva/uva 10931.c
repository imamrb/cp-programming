#include <stdio.h>

int main()
{
    long int N;
    int i, j, m, k, parity, modulo ;
    int arr[100];
    while(scanf("%ld", &N) && N!=0){
        i = 0;
        while(N){
            arr[i] = N%2;
            N/=2;
            i++;
        }
        parity = 0;
        printf("The parity of ");
        for(j=i-1; j>=0; j--){
            printf("%d", arr[j]);
            if(arr[j]==1) ++parity;
        }
        printf(" is %d (mod 2).\n", parity);
    }
    return 0;
}
