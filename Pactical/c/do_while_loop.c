#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter num value: ");
    scanf("%d", &num);
    do 
    {
        printf("%d * %d",num,i+1);
        i++;
    }
    while  (i<=10);    
}