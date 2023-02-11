#include <stdio.h>

int main()
{
    char str[700], pizza[10]={"MARGARITA"};
    int arr[100];
    int T, i, j, check, count;


    scanf("%d", &T);
    getchar();
    while(T--){
        memset(arr, 0, sizeof(arr));
        gets(str);
        for(i=0; str[i]; i++){
            arr[str[i]]++;
        }
        count = 0;
        do{
            check = 0;
            for(j=0; pizza[j]; j++){
                if(arr[pizza[j]]){
                    arr[pizza[j]]--;
                }
                else {
                    check = 1;
                    break;
                }
            }
            if(!check) ++count;
        }while(!check);

        printf("%d\n", count);
    }
    return 0;
}
