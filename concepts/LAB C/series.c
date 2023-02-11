#include<stdio.h>
main()
{
    int a=2,b=5,c=8;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d.%d.%d + ",a,b,c);
        a=a+3;
        b=b+3;
        c=c+3;
    }
    printf(".....");

}
