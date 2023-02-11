#include <stdio.h>

int main()
{
    char str[1000];
    int T, i, j, k, p , max;
    int arr[100];

    for(i=65; i<91; i++)
        arr[i] = 0;

    scanf("%d", &T);
    getchar();
    max = 0;
    k = 0;
    while(T--){
        gets(str);
        for(i=0; str[i]; i++){
            if(isalpha(str[i])) {
                p = toupper(str[i]);
                arr[p]++;
                if(arr[p]>max) max = arr[p];
                ++k;
            }
        }
    }
    for(i=1; i<k; i++){
        for(j=65; j<91; j++){
            if(arr[j]!=0 && arr[j]==max) printf("%c %d\n", j, arr[j]);
        }
        --max;
    }

    return 0;
}
