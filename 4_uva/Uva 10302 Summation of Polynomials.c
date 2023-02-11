#include <stdio.h>

int main()
{

    long long int sum, x, i,n;
    long long int arr[50001];

    arr[0] = 0;
    for(i=1; i<=50000; i++){
        n = i*i*i;
        arr[i]=arr[i-1]+n;
    }
    while(scanf("%lld", &x)!=EOF){
        printf("%lld\n", arr[x]);
    }
    return 0;
}
