#include<stdio.h>

int main()
{
    int i, j,t=0,m,n=0,k,l,x;
    char str[1000];
    int test[1000];
    gets(str);

   for(j=65; j<=122; j++) {
        for(i=0; str[i]!='\0'; i++) {
            if(j==str[i]){
                k = j;
                if(k<97) {
                    k = k+32;
                }
                test[t]=k;
                ++t;
                break;
            }
        }
   }
   for(x=97; x<=122; x++){
        m = 0;
        for(l=0; l<=t; l++){
            if(test[l]==x){
                m = 1;
                break;
            }
        }
      if(m==0) {
            printf("%c is missing\n", x);
            n = 1;
      }
   }
   if(!n) printf("The sentence contains all words!");

   return 0;
}
