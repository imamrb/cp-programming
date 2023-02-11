#include <stdio.h>

int main()
{
    char str[1000];
    int arr[130];
    int i , j, t, max;

    while(gets(str)){
        for(i=0; i<=122; i++){
            arr[i] = 0;
        }
        max = 0;
        for(i=0; str[i]; i++){
             t = str[i];
             if(isalpha(t)){
                 arr[t]++;
                if(arr[t]>max) max=arr[t];
             }
        }
        for(i=0; i<=122; i++){
            if(arr[i]==max) printf("%c", i);
        }
        printf(" %d\n", max);
    }
    return 0;
}
