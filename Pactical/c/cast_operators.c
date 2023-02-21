#include<stdio.h>
int main()
{
   	int num1, num2;
    float rem1, rem2;
	printf("Enter value num1 : ");
	scanf("%d",&num1);
    printf("Enter value num1 : ");
    scanf("%d",&num2);	
	rem1=num1/num2;		
	printf("Remainder1=%f\n",rem1);
	rem2=(float)num1/num2;
	printf("Remainder2=%f\n",rem2);
	return 0;
}