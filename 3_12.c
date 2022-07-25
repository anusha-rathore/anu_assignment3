
#include<stdio.h>
int main()
{
    char m;
    printf("Enter a character:");
    scanf("%c",&m);
    if(m>=97)
        printf("Lowercase");
    else
        printf("Uppercase");
        return 0;
}
