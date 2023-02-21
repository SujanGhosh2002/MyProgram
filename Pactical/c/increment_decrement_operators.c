#include<stdio.h>
int main()
{
   	int num;
	printf("Enter value num : ");
	scanf("%d",&num);
    printf("Number =%d\t",num);
	printf("Number =%d\t",++num);
	printf("Number =%d\t",num);
	printf("Number =%d\t",--num);
	printf("Number =%d\n",num);	
    printf("Number =%d\t",num);
	printf("Number =%d\t",num++);
	printf("Number =%d\t",num);
	printf("Number =%d\t",num--);
	printf("Number =%d\n",num);
	return 0;
}