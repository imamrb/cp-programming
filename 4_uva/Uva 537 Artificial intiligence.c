#include <stdio.h>

int main()
{
    char ch;
    int t , T;
    double P, I , U, n, check;

    scanf("%d", &T);
    getchar();
    for(t=1; t<=T; t++){
        check = 0;
        P = I = U = 0;
        while((ch=getchar())!='\n'){
            if(ch=='='){
                scanf("%lf", &n);
                check = 1;
                continue;
            }
            if(check){
                switch(ch){
                case 'm': n/=1000;
                continue;
                case 'k': n*=1000;
                continue;
                case 'M': n*=1000000;
                continue;
                case 'V': U = n;
                break;
                case 'A': I = n;
                break;
                case 'W': P = n;
                break;
                }
            }
            if(ch='V'||ch=='A'||ch == 'W') check = 0;
        }
        printf("Problem #%d\n", t);
        if(U && I) printf("P=%.2lfW\n", U*I);
        else if(U && P) printf("I=%.2lfA\n", P/U);
        else if(P && I) printf("U=%.2lfV\n", P/I);
        printf("\n");
    }
    return 0;
}
