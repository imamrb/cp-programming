#include <stdio.h>

int main()
{
    char str[200];
    int arr[30];
    int T, i, j, l, max;

    scanf("%d", &T);
    getchar();
    while(T--){
        gets(str);
        for(i=97; i<=122; i++)
            arr[i] = 0;
        for(i=0; str[i]; i++){
            if(isalpha(str[i])){
                l = tolower(str[i]);
                arr[l]++;
            }
        }
        max = 0;
        for(i=97; i<=122; i++){
            if(arr[i]>max)
                max = arr[i];
        }
        for(i=97; i<=122; i++){
            if(arr[i]==max)
                printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}
