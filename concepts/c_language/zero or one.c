#include <stdio.h>

int main()
{
    short int A,B,C;

    while(scanf("%hd %hd %hd", &A, &B, &C)!=EOF){
        if(A==B && B==C) printf("*\n");
        else if(A==B) printf("C\n");
        else if(B==C) printf("A\n");
        else printf("B\n");

    }
    return 0;
}
