#include <stdio.h>
#define Array_size 5000
//5000 is enough to calculate factorial upto 1500!
//Increase the size if needed further
int main()
{
    int a[Array_size];
    int N, x, temp, i, j, m;

    while(scanf("%d", &N)!=EOF){
        a[0] = 1;
        m = 1; //Initializes digits Counter
        temp = 0;
        for(i=1; i<=N; i++){
            for(j=0; j<m; j++){
                x = a[j]*i + temp;
                a[j] = x%10; //storing the last digit from the product x
                temp = x/10; //contains the carry value
            }
            while(temp){
                a[m++] = temp%10; //Here we store the digits in array from temp
                temp/=10;
                //See, only the temp portion increments the number of digits m
            }
        }
        printf("%d!= ", N);
        for(j=m-1; j>=0; j--)
            printf("%d", a[j]);
        printf("\n");
    }

    return 0;
}
