#include<stdio.h>
typedef unsigned long long int64;
int main(){
   int64 O[65],two;
   int i;

   O[1]=1;
   two = 1;
   printf("Total Number of 1's bits between 0 and %llu:%llu\n",(two<<1)-1,O[1]);
   for (i=2;i<64;i++){
       two = two<<1;
       O[i] = two + 2*O[i-1];
       printf("Total Number of 1's bits between 0 and %llu:%llu\n",(two<<1) -1,O[i]);
   }
   return 0;
}
