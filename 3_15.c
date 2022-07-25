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
    else if (number<0)
    {
        printf("number is negative number");

    } 
    else
    {
        printf("zero");
    }   
    return 0;
}