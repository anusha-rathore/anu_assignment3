#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if (number%7==0 || number%3==0)

    {
    printf("a given number is divisible by 7 or divisible by 3");  /* code */
    }
    else
    printf(" no a given number is not  divisible by 7 or divisible by 3.");
}