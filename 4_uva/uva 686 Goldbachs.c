#include <stdio.h>
#include <math.h>

int main()
{
    int num , i ,j, check, count, k,p,m;
    int prime[5000];

    while(scanf("%d", &num)==1 && num!=0){

        k = 0;
        for(i=2; i<num; i++){
            check = 0;
            for(j=2; j<=sqrt(i); j++){
                if(i%j==0){
                    check = 1;
                    break;
                }
            }
            if(check == 0){
                prime[k] = i;
                ++k;
            }
        }
        count = 0;
        for(p=0; p<k; p++){
            for(m=p; m<k; m++){
                if(prime[p]+prime[m]==num) count++;
            }
        }
         printf("%d\n", count);
    }
    return 0;
}
