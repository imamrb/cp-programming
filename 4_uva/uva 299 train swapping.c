#include <stdio.h>

int main()
{
    int arr[100];
    int T , L, i, j, temp, swaps;

    scanf("%d", &T);
    while(T--){
        scanf("%d", &L);
        for(i=0; i<L; i++){
            scanf("%d", &arr[i]);
        }
        swaps = 0;
        for(i=0; i<L; i++){
            for(j=L-1; j>i; j--){
                if(arr[j-1]>arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                    ++swaps;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }
    return 0;
}
