// Conditional Operator & Ternary Operator ()

#include<stdio.h>
int main()
{
	int num1, num2, max;
	printf("Enter value num1 : ");
	scanf("%d",&num1);
    printf("Enter value num1 : ");
    scanf("%d",&num2);
	max = num1>num2 ? num1 : num2;		
	printf("Larger of %d and %d is %d.\n",num1,num2,max);
	return 0;
}