#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",&number);
    if (number>0)
    {
        printf("number is positive number");
        /* code */
    }
    else
    {
        printf("number is non-positive number");

    }    
    return 0;
}