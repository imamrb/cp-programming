#include <stdio.h>
#include <math.h>
#define Max 1000001
int arr[Max];
void factorials_factor()
{
    int M, n, k, check , i, count;
    arr[1] = 0;
    for(M=2; M<=Max; M++){
        count = 0;
        n = M;
        k = 2;
        while(n!=1){
            check = 0;
            for(i=k; i<=sqrt(n); i++){
                if(n%i==0){
                    count++;
                    n/=i;
                    k = i;
                    check = 1;
                    break;
                }
            }
            if(!check) {
                count++;
                break;
            }
        }
        arr[M] = arr[M-1]+count;
    }
}
int main()
{
    int N;;
    factorials_factor();

    while(scanf("%d", &N)!=EOF){
        printf("%d\n", arr[N]);
    }
    return 0;
}
