#include<stdio.h>
int main(){
    int number;
    printf("Enter a number\n");
    scanf("%d",&number);
    if (number%3==0 && number%2==0)

    {
    printf("a given number is divisible by 3 and divisible by 2");  /* code */
    }
    else
    printf(" no a given number is not  divisible by 3 and divisible by 2.");
}
