#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter num1 value: ");
    scanf("%d", &num1);
    printf("Enter num1 value: ");
    scanf("%d", &num2);
    printf("Enter num1 value: ");
    scanf("%d", &num3);
    if (num1 >num2)
    {
        if (num1>num3 )
        {
            printf("num1 is bigest");
        }
        else
        {
            printf("num3 is bigest");
        }
    }
    else
    {
        if (num2>num3)
        {
            printf("num2 is bigest");
        }
        else
        {
            printf("num3 is bigest");
        }
    }
    return 0;
}