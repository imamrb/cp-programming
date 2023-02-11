#include <stdio.h>

int main()
{
    int T,N,p,j,i,a,x,y,z,test,k,l;
    int nums[100], keep[100], keep2[100];
    printf("Test case: ");
    scanf("%d",&T);
    for(i=0; i<T; i++) {
        printf("Numbers of integers(currently only for 2 integers works): ");
        scanf("%d", &N);
        printf("Enter two integers: ");
        for(k=0; k<N; k++) {
            scanf("%d", &nums[k]);
        }
        for(k=0; k<N-1; k++) {
                p = 0;
            for(j=1; j<=nums[k]; j++) {
                if(nums[k]%j == 0) {
                    keep[p] = j;
                    ++p;
                }
            }
            l = 0;
            for(j=1; j<=nums[k+1]; j++) {
                if(nums[k+1]%j == 0) {
                    keep2[l] = j;
                    ++l;
                }
            }
            z = 0;
            for(x=0; x<=p; x++) {
                for(y=0; y<=l; y++) {
                    if(keep[x]==keep2[y]) {
                            test = keep[x];
                    }
                    if(test>=z) {
                        z = test;
                    }
                }
            }
        }
        printf("GCD of given numbers is: %d\n", z);
    }
    return 0;
}
