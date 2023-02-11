//  * Prime Factorilization of a number
// This program finds all prime factors of a ginven numbets
#include <stdio.h>
#include <string.h>
int prime[100];

void prime_factor(int n, int arr[])
{
    int i, j=0;

// find the number of 2's that divide n
    while(n%2==0){
        arr[j++] = 2;
        n/=2;
    }
// n must be odd at this point, so we can skip even i's(i+=2)
    for(i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            arr[j++] = i;
            n/=i;
        }
    }
// at this point if n is greater than 2, than n itself is a prime number
    if(n>2) arr[j++] = n;

    for(i=0; i<j; i++)
        printf("%d ", arr[i]);

}

int main()
{
    int n;
    char ch;

    do{
        printf("Enter the number: ");
        scanf("%d", &n);
        printf("Prime factors of %d is: \n", n);
        prime_factor(n, prime);

        getchar();
        printf("\nDo you wish to continue?(y/n): ");
        ch = getche();
        printf("\n");
    }while(ch=='y');
    return 0;
}
