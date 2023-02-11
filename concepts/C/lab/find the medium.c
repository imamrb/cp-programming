#include<stdio.h>

int main()
{
    int a, b, c, mid ;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a ,&b, &c);

    if(a>b){
        if(a<c)
            mid = a;
        else {
            if(b>c)
                mid = b;
            else mid = c;
        }
    }
    else {
        if(b<c)
            mid = b;
        else {
            if(a<c)
                mid = a;
            else mid = c;
        }
    }
    printf("Medium = %d", mid);
}
