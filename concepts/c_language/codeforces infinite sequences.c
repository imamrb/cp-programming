#include<stdio.h>

int main()
{
    long int a, b, c;
    int check ;
    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
    check = 0;
    if(c!=0){
        if(a<=b && a!=c){
            while(a<=b){

                if(a!=b) a+=c;
                if(a==b){
                    printf("YES\n");
                    check = 1;
                    break;
                }
            }
        }
        else if(a>=b && a!=c){
            while(a>=b){
                if(a!=b) a+=c;
                if(a==b){
                    printf("YES\n");
                    check = 1;
                    break;
                }
            }
        }
    }
    if(!check) printf("NO\n");
    }

    return 0;
}
