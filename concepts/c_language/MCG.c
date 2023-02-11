#include <stdio.h>
int main()
{
    long int N,j,n,x,t,l,test;
    short int T,i;
    long int a[100], ans[100],m[100];
    char c[10];
    scanf("%hd", &T);

    for(i=0; i<T; i++) {
        scanf("%ld", &N);
        n=0;
        x=0;
        for(j=0; j<N; j++) {
            scanf("%s", c[0]);
            test=0;
            if(c[0]=='A') {
                scanf("%ld", &a[n]);
                ++n;
            }
            else if(c[0]=='Q') {
                for(l=0; l<n; l++) {
                    if(a[l]>test)
                    test = a[l];
                }
                if(n>0)
                    ans[x] = test;
                else
                    m[x]= x;
                ++x;
            }
            else if(c[0]=='R') {
                n=n-2;
            }
        }
        printf("case %hd:\n", i+1);
        for(t=0; t<x; t++) {
            if(t==m[t]) {
                printf("Empty");
            }
            else
            printf("%ld\n", ans[t]);
        }
    }
    return 0;
}
