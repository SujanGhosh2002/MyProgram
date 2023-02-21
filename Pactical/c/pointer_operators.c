#include<stdio.h>
int main()
{
   	int num,*ptr;
    ptr=&num;
	printf("Enter value num : ");
	scanf("%d",&num);
    printf("pointer1 : %d",num);
    printf("pointer2 : %d",&num);
    printf("pointer3 : %d",ptr);
    printf("pointer4 : %d",*ptr);
    printf("pointer5 : %d",&ptr);
	return 0;
}