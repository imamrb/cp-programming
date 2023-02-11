/*
    * Implementation of Evaluating Ackermann funtion
   by recursive function
  * Procedure :
      1. if m=0 , Ackermann(m,n)=n+1
      2. if m!=0 but n=0, then Ackermann (m,n)=   Ackermann(m-1,1)
      3. if m!=0 and n!=0 , then Ackermann(m,n) = Ackermann(m-1,Ackermann(m,n-1))
*/
#include <stdio.h>

int Ackerman(int m, int n);

int main()
{
    int m, n;

    printf("Enter the variables of ackerman functions(m & n): ");
    scanf("%d %d", &m, &n);
    printf("The value of A(%d,%d): %d\n", m, n, Ackerman(m,n));

    return 0;
}
int Ackerman(int m, int n)
{
    if(m==0)
        return n+1;
    else if(m && n==0)
        Ackerman(m-1, 1);
    else if(m && n)
        Ackerman(m-1, Ackerman(m, n-1));
}
