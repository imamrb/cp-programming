#include <stdio.h>

int main()
{
    int arr[100001];
    int N, i, j, swap;
    long long int sum, print;

    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);
    for(i=0; i<N; i++){
        for(j=N-1; j>=i; j--){
            if(arr[i]>arr[j]){
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    sum = 0;
    for(i=0, j=N-1; i<N; i++, j--){
        sum+= arr[i]*arr[j];
    }
    print = sum % 10007;
    printf("%I64d\n", print);

    return 0;
}
