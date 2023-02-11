#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int arr[128], freq[128], ascii[128];
    int T, i, j, len, check , k, temp, n, time;

    while(gets(str)){
        len = strlen(str);
        for(i=0; i<128; i++){
            arr[i] = 0;
        }
        for(i=0; i<len; i++){
            arr[str[i]]++;
        }
        k = 0;
        time = 1;
        for(i=33; i<128; i++){
            check = 0;
            if(arr[i]!=0){
                for(j=127; j>i; j--){
                    if(arr[j]!=0 && arr[i]>arr[j]){
                        freq[k] = arr[j];
                        ascii[k] = j;
                        temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;
                        check = 1;
                    }

                }
                if(check==0) {
                    freq[k] = arr[i];
                    ascii[k] = i;
                }
                ++k;
            }
        }
        for(n=0; n<k; n++){
            printf("%c %d\n", ascii[n], freq[n]);
        }
        printf("\n");
    }
}
