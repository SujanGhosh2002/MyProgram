// Relational Operators (==,!=,!,>,<,>=,<=,)

#include<stdio.h>
int main()
{
	int num1, num2 ;
	printf("Enter value num1 : ");
	scanf("%d",&num1);
    printf("Enter value num1 : ");
    scanf("%d",&num2);
	if(num1==num2)
	{
  		printf("%d is equal to %d\n",num1,num2);
	}
	if(num1!=num2)
	{
  		printf("%d is not equal to %d\n",num1,num2);
	}
	if(num1<num2)		
	{	
  		printf("%d is less than %d\n",num1,num2);
	}
	if(num1<=num2)
	{
  		printf("%d is less than or equal to %d\n",num1,num2);
	}
	if(num1>num2)
	{
 		printf("%d is greater than %d\n",num1,num2);
	}
	if(num1>=num2)
	{
  		printf("%d is greater than or equal to %d\n",num1,num2);
	}
	return 0;
}