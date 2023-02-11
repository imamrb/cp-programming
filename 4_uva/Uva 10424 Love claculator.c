#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char name1[26], name2[26];
    int i, j, n1, n2, sum1, sum2, v, swap;
    float ratio, result;
    while(gets(name1) && gets(name2)){
        sum1 = 0;
        for(i=0; name1[i]; i++){
            if(isalpha(name1[i])){
                v = tolower(name1[i]) - 96;
                sum1+=v;
            }
        }
        n1 = compress(sum1);
        sum2 = 0;
        for(i=0; name2[i]; i++){
            if(isalpha(name2[i])){
                v = tolower(name2[i])-96;
                sum2+=v;
            }
        }
        n2 = compress(sum2);
        if(n1>n2) {
            swap = n2;
            n2 = n1;
            n1 = swap;
        }
        ratio = (float) n1/n2;
        result = ratio * 100;
        printf("%.2f %c\n", result,'%');
    }
    return 0;
}
int compress(int n)
{
    int temp, sum, r;
    while(n/10){
        temp = n;
        sum = 0;
        while(temp){
            r = temp % 10;
            temp/=10;
            sum+=r;
        }
        n = sum;
    }
    return n;
}
