#include<stdio.h>
int main()
{
int n,i;
char str[20][20]; // Can store 20 strings, each of length 20

scanf("%d",&n); //how many string

//input each string
for(i=0;i<n;i++)
{
   scanf("%s",str[i]);
}

//display each string
for(i=0;i<n;i++)
{
   printf("%s",str[i]);
   printf("\n");
}

return 0;
}
