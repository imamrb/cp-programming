#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    long long int P;
    int T, iteration;

    scanf("%d", &T);
    while(T--){
        scanf("%lld", &P);
        iteration = 0;
        while(!ispalindrome(P)){
            P +=reverse(P);
            ++iteration;
        }
        printf("%d %lld\n", iteration, P);
    }
}
int ispalindrome(long long int n)
{
    char str[20], str3[20];
    long long int p;

    sprintf(str, "%lld", n);
    p = reverse(n);
    sprintf(str3, "%lld", p);
    if(strcmp(str, str3)==0)
        return 1;
    else return 0;
}
long long int reverse(long long int m)
{
    char str2[20], str3[20];
    long long int num;
    int k, len, i;

    sprintf(str2, "%lld", m);
    len = strlen(str2);
    k = 0;
    for(i=len-1; i>=0; i--){
        str3[k] = str2[i];
        ++k;
    }
    num = atoi(str3);
    return num;
}
