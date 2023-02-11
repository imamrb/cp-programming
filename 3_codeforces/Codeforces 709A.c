#include <stdio.h>

int main()
{
    int i, n, b, d, sum, count;
    int arr[100000];

    scanf("%d %d %d", &n, &b, &d);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    count = 0;
    sum = 0;
    for(i=0; i<n; i++){
        if(arr[i]<=b){
            sum+=arr[i];
            if(sum>d){
                ++count;
                sum = 0;
            }
        }
    }
    printf("%d", count);

    return 0;
}
