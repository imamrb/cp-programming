#include <stdio.h>

int main()
{
    int arr[100];
    int i, j, N, swap;

    printf("Enter the number of Elements: ");
    scanf("%d", &N);

    printf("\nInput the elements need to sort: ");
    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<N-2; i++){
        for(j=N-1; j>=i; j--){
            if(arr[j]<arr[i]){
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    printf("Ascending order after sorting: ");
    for(i=0; i<N; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
