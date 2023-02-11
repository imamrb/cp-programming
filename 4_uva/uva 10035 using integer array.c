#include <stdio.h>

int main()
{
    unsigned long long int a, b;
    int i, r1, r2,j, carry , count;
    int arr1[100], arr2[100];

    while(scanf("%llu %llu", &a , &b)==2){
        if(a==0 && b==0) break;
        else
        i = 0;
        while(a || b){
            if(a==0) r1 = 0;
            else {
                r1 = a%10;
                a/=10;
            }
            if(b==0) r2 = 0;
            else {
                r2 = b%10;
                b /=10;
            }
            arr1[i] = r1;
            arr2[i] = r2;
            ++i;
        }
        count = 0;
        carry = 0;
        for(j=0; j<i; j++){
           if(arr1[j]+arr2[j]+carry>=10){
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
