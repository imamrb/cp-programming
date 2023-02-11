#include <stdio.h>
#include <string.h>

int main()
{
     char str[110];
     int N,j,i,k,r,g,T=101;

     while(T--){
        scanf("%d", &N);
         if(N){
            getchar();
            gets(str);
            j = strlen(str);
            g = j/N;
            for(i=0; i<j; ){
                k = i+g-1;
                for(r=k; r>=1+k-g; r--){
                    printf("%c", str[r]);
                    ++i;
                }
            }
            printf("\n");
         }
         else break;
     }
     return 0;
}
