#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter num value: ");
    scanf("%d", &num);
    while (i<=10)
    {
        printf("%d * %d",num,i+1);
        i++;
    }
    
}