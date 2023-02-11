#include <stdio.h>
#include <string.h>
#define Max 10000
#define Base 10

int transform_to_array(char num[], int arr[])
{
    int len, j, i;

    len = strlen(num);
    j = 0;
    for(i=len-1; i>=0; i--)
        arr[j++] = num[i]-48;
    return len; //returning the length of the input to define the 'max' length
}
void addition(int arr1[], int arr2[], int max)
{
    int i, j, carry = 0, sum;
    int result[Max];

    for(i=0; i<max; i++){
        sum = arr1[i] + arr2[i] + carry;
        if(sum>=Base){
            carry = 1;
            sum -= Base;
        }
        else carry = 0;
        result[i] = sum;
    }
    if(carry){
        if(max<Max)
            result[i++] = carry;
        else printf("Overflow in Addition!\n");
    }
    printf("The result of Addition: \n");
    for(j=i-1; j>=0; j--){
        printf("%d", result[j]);
    }
    printf("\n\n");
}
void subtraction(int arr1[], int arr2[], int max)
{
    int i, j, carry=0, sub, temp;
    int result[Max];

    for(i=0; i<max; i++){
        if(arr1[i]<arr2[i])
            temp = Base;
        else temp = 0;
        result[i] = (arr1[i]+temp) - (arr2[i]+carry);
        if(arr1[i]<arr2[i])
            carry = 1;
        else carry = 0;
    }
    printf("The result of Subtraction: \n");
    if(carry) {
        printf("(Subtraction Result is negative)\n");
        printf("-");
    }
    for(j=i-1; j>=0; j--){
        printf("%d", result[j]);
    }
    printf("\n\n");
}

int main()
{
    char num1[Max], num2[Max];
    int arr1[Max], arr2[Max];
    int s1, s2, max, choice;

    loc:
    printf("Enter the first Number: \n num1: ");
    gets(num1);
    printf("Enter the second Number: \n num2: ");
    gets(num2);
    memset(arr1, 0, sizeof(arr1));
    memset(arr2, 0, sizeof(arr2));

    s1 = transform_to_array(num1, arr1);
    s2 = transform_to_array(num2, arr2);
    max = s1>s2 ? s1 : s2;
    do{
        printf("What do you want to do?\n");
        printf("\t1.Addition\n\t2.Subtraction\n\t");
        printf("3.Retake Input\n\t4.None(Exit)\n Choice:");
        scanf("%d", &choice);
        switch(choice){
            case 1: addition(arr1, arr2, max);
            break;
            case 2: subtraction(arr1, arr2, max);
            break;
            case 3: getchar();
                    goto loc;
                    break;
            case 4: printf("Exiting....\n");
            break;
            default:
                printf("Your Choice is undefined! Retry:\n");
        }
    }while(choice && choice!=4);

    return 0;
}
