#include <stdio.h>
#include <math.h>

int main()
{
    long int N, i, j, n, T;
    double d, sum;
    int arr[50];

    scanf("%ld", &T);
    while(T--){
        scanf("%ld", &N);
        n = N;
        i = 0;
        while(n){
            arr[i++] = n % 10;
            n/=10;
        }
        sum = 0;
        for(j=0; j<i; j++){
            d = pow(arr[j], i);
            sum += d;
            if(sum>N) break;
        }
        if(sum==N) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
