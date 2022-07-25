#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if (number&1)
    {
        printf(" number is odd number");
        /* code */
    }
    else
    {
        printf("number is even number");

    }    
    return 0;
}