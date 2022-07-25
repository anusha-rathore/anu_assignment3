#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year:");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
            printf("Leap year");
        else
            printf("Not a leap year");
    }
    else if(x%4==0)
        printf("Leap year");
    else
        printf("Not a leap year");
}

// int main()
// {
//     int year;
//     printf("enter year");
//     scanf ("%d",&year);
//     if (year%400==0)

    
//     {
    
//     printf("leap year");    /* code */
//     }
    
//     else if (year%100==0)
//     {
//         /* code */ printf("not a leap year");
//     }

//     else if (year%4==0)
//     {
//         /* code */ printf("leap year");
//     }
    
    
//     else
//     {
//     printf("not a leap year");
//     }
// }