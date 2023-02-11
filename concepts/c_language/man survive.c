#include <stdio.h>

int main()
{
    int num,m,n,i;
    int survive[1000];

    printf("Enter the num of head: ");
    while(scanf("%d", &num)!=EOF){
    m = 1;
    n = 1;
    for( ; ; ) {
        for(i=0; i<num/2; i++) {
            survive[i] = m+n;
            m+=2*n;
        }
        for(i=0; i<num/2; i++){
            printf("%d ", survive[i]);
        }
        printf("\n");
        m = survive[0];
        n = survive[0];
        num = num/2;
        if(num==1) break;
    }
    printf("Man survived in position : %d\n\n", survive[0]);
    printf("Enter the num of head: ");
    }
    return 0;
}
