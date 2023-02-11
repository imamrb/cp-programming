#include <stdio.h>
int main()
{
    long int N,j,n,x,t,l,test;
    short int T,i;
    long int a[100000], ans[100000],m[100000];
    char c[10], ch;
    scanf("%hd", &T);

    for(i=0; i<T; i++) {
        scanf("%ld", &N);
        n=0;
        x=0;
        for(j=0; j<N; j++) {
            scanf("%s", &c[0]);
            ch = c[0];
            test=0;
            if(ch=='A') {
                scanf("%ld", &a[n]);
                ++n;
            }
            else if(ch=='Q') {
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
            else if(ch=='R') {
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

