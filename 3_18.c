#include<stdio.h>
int main()
{
    int month_number;
    printf("Enter month:");
    scanf("%d",&month_number);

     if ( month_number==1 || month_number==3 || month_number==5|| month_number==7 || month_number==8 || month_number==10 || month_number==12)
        printf("31 Days.");
    else if(month_number==2)
        printf("28/29 Days.");
    else if(month_number==4 || month_number==6 || month_number==9 || month_number==11)
        printf("30 Days.");
        return 0;
}