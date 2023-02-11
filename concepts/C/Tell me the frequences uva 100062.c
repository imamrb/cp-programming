#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int check , temp, fq, i, j, k, len, p, d, h;
    int arr[500], ascii[100], freq[100];

    while(gets(str)){
        len = strlen(str);
        for(i=0; i<150; i++){
            arr[i] = 0;
        }
        for(i=0; i<len; i++){
            arr[str[i]]++;
        }
        k = 0;
        h = 0;
        for(i=33; i<129; i++){
            p = 0;
            if(arr[i]!=0){
                for(j=i; j<129; j++){
                    if( h>=p && arr[j]>=p ){
                      p = arr[j];
                      d = j;
                    }
                }
                h = p;
                ascii[k] = d;
                freq[k] = h ;
                ++k;
            }
        }
        for(j=k-1; j>=0; j--){
            printf("%d %d\n", ascii[j], freq[j]);
        }
    }
    return 0;
}
