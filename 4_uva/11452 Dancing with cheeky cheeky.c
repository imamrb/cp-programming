#include <stdio.h>
#include <string.h>

int main()
{
    char steps[2000];
    int arr[55],T,i,j, len,count, flag;
    char min;

    scanf("%d", &T);
    getchar();
    while(T--){
        gets(steps);
        for(i=49; i<=52; i++)
            arr[i] = 0;
        for(i=0; steps[i]; i++)
            arr[steps[i]]++;
        for(i=49; i<=51; i++){
            if(arr[i]<arr[i+1]){
                min = i;
                break;
            }
            else if(arr[i]>arr[i+1]){
                min = i+1;
                break;
            }
            else min = steps[0];
        }
        len = strlen(steps);
        for(i=0; i<len; i++){
            if(steps[i]==min){
                flag = i;
                break;
            }
        }
        count = 0;
        i = flag;
        printf("flag %d\n", i);
        while(count<8){
            printf("%c", steps[i]);
            ++count;
            if(count==8) break;
            if(i==len-1) i = flag;
            else ++i;
        }
        printf("...\n");
    }
    return 0;
}
