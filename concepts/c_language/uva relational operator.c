#include <stdio.h>

int main()
{
    long long int num1, num2;
    int T;
    scanf("%d", &T);
    while(T--){
        scanf("%lld %lld", &num1, &num2);
        if(num1>num2) printf(">\n");
        else if(num1<num2) printf("<\n");
        else printf("=\n");
    }
    return 0;
}
