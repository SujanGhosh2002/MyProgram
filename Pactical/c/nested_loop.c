#include <stdio.h>
int main()
{
    int num, i, j;
    printf("Enter num value: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("*");
        }
    }
}