#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if (number%2==0)
    {
        printf(" number is even number");
        /* code */
    }
    else
    {
        printf("number is odd number");

    }    
    return 0;
}