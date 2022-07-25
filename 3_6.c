#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("  a i greater : %d\n",a);
     else if (a=b)
     {
        printf(" both are same  : %d\n",a);
        /* code */ 
     }
     else
        printf(" b is greater :%d",b);
}