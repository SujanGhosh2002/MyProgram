#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter num value: ");
    scanf("%d", &num);
    for (i=0;i<=10;i++)
    {
        printf("%d * %d",num,i+1);
    }
    
}