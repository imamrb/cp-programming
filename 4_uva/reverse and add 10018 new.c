#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    long long int P, p;
    int T, iteration,len, t, j;
    char str3[20], str4[20];

    scanf("%d", &T);
    while(T--){
        scanf("%lld", &P);
        iteration = 0;
        while(!ispalindrome(P)){
            sprintf(str3, "%lld", P);
            len = strlen(str3);
            t = 0;
            for(j=len-1; j>=0; j--){
                str4[t++] = str3[j];
            }
            str4[t]='\0';

            P+=atoi(str4);
            ++iteration;
        }
        printf("%d %lld\n", iteration, P);
    }
    return 0;
}
int ispalindrome(long long int n)
{
    char str[20], str2[20];
    long long int p;
    int k, len, i;
    sprintf(str, "%lld", n);

    len = strlen(str);
    k = 0;
    for(i=len-1; i>=0; i--){
        str2[k++] = str[i];
    }
    str2[k] = '\0';
    if(strcmp(str, str2)==0)
        return 1;
    else return 0;
}
