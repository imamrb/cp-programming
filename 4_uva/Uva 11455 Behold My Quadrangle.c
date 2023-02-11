#include <stdio.h>

int main()
{
    int T , i, j, sum, check;
    int arr[5];

    scanf("%d", &T);
    while(T--){
        for(i=0; i<4; i++){
            scanf("%d", &arr[i]);
        }
        check = 0;
        for(i=0; i<3; i++){
            if(arr[i]!=arr[i+1]){
                check = 1;
                break;
            }
        }
        if(check == 0) printf("square\n");
        else {
            for(i=0; i<4; i++){
                check = 0;
                for(j=3; j>=0; j--){
                    if(i!=j) {
                        if(arr[i]==arr[j]){
                            check = 1;
                            break;
                        }
                    }
                }
                if(check==0) break;
            }
            if(check == 1) printf("rectangle\n");
            else {
                check = 0;
                for(i=0; i<4; i++){
                    sum = 0;
                    for(j=0; j<4; j++){
                        if(i!=j) sum+=arr[j];
                    }
                    if(sum>arr[i]) check = 0;
                    else {
                        check = 1;
                        break;
                    }
                }
                if(check == 0) printf("quadrangle\n");
                else printf("banana\n");
            }
        }
    }
    return 0;
}
