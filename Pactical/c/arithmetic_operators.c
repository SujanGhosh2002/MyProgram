#include<stdio.h>
int main()
{
   	int num1, num2, add, sub, mul, div, rem;
	printf("Enter value num1 : ");
	scanf("%d",&num1);
    printf("Enter value num1 : ");
    scanf("%d",&num2);	
    add=num1+num2;
	printf("Addition: ( %d + %d ) =%d\n",num1, num2, add);
    sub=num1-num2;
	printf("Subtraction: ( %d - %d ) = %d\n",num1, num2, sub);
    mul=num1*num2;
	printf("Multiplication: ( %d * %d ) = %d\n",num1, num2, mul);
    div=num1/num2;
	printf("Divition: ( %d / %d ) = %d\n",num1, num2, div);
    rem=num1%num2;
	printf("Remainder: ( %d '/. %d ) = %d\n",num1, num2, rem);
	return 0;
}