#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("num1 equal num2");
    }
    else if(num1>num2)
    {
        printf("num1 getar than num2");
    }
    else
    {
        printf("num1 less than num2");
    }
    return 0;
}