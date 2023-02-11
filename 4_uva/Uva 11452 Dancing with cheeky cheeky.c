#include <stdio.h>
#include <string.h>
char str[2005];
int define_flag(int len, char str[]);

int main()
{

    int T,i,flag,len,check,count;

    scanf("%d", &T);
    getchar();
    while(T--){
        gets(str);
        len = strlen(str);
        flag = define_flag(len, str);
        count = 0;
        i = flag;
        while(count<8){
            printf("%c", str[i]);
            if(i==len-1) i = flag;
            else i++;
            ++count;
        }
        printf("...\n");
    }
    return 0;
}
int define_flag(int len, char str[])
{
        int i,flag;
        int arr[55];

        for(i=49; i<=52; i++)
            arr[i] = 0;
        for(i=0; str[i]; i++)
            arr[str[i]]++;
        for(i=0; i<len; i++){
            if(str[len-1]==str[i]){
                flag = i+1;
                break;
            }
        }
        if(arr[52]){
            if(arr[51]!=arr[52])
                flag += 3;
        }
    return flag;
}
