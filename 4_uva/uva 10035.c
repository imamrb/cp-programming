#include <stdio.h>
#include<string.h>

#define Max 1000000

int main()
{
    char str1[Max], str2[Max];
    long int i, j, k, a,b, carry, temp,t;
    int count;

    while(scanf("%s %s", &str1, &str2)){
        if(str1[0]-48==0 && str2[0]-48==0) break;
        j = strlen(str1);
        k = strlen(str2);
        if(j>k){
            temp = k;
            k = j;
            j = temp;
        }
        count = 0;
        carry = 0;
        for(i=k-1; i>=0; i--){
            a = str1[i]-48;
            b = 0;
            if(j>0){
            for(t=j-1; t>=0; t--){
                b = str2[t]-48;
                --j;
                break;
            }
            }
            if(a+b+carry>=10){
            ++count;
            carry = 1;
           }
           else carry = 0;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("%d carry operation.\n", count);
        else printf("%d carry operations.\n", count);
    }
    return 0;
}
