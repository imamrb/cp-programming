#include <stdio.h>

int main()
{
    int N,i, check , check3, check4;
    int arr[11];

    scanf("%d", &N);
    printf("Lumberjacks:\n");
    while(N--){
        for(i=0; i<10; i++){
            scanf("%d", &arr[i]);
        }
        check=check3=check4=0;
        for(i=0; i<9; i++){
            if(arr[i]<arr[i+1]){
                check = 1;
                check3 = 1;
                if(check4==1) break;
            }
            else if(arr[i]>arr[i+1]) {
                    check = 1;
                    check4 = 1;
                    if(check3==1) break;
            }
        }
        if(check==check3==check4) printf("Unordered\n");
        else printf("Ordered\n");
    }
    return 0;
}
