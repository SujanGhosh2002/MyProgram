#include<stdio.h>
int main()

{
	int array[100],size,i,position,element;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array Element: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Insert position: ");
	scanf("%d",&position);
	printf("Insert element: ");
	scanf("%d",&element);
	printf("Before inserting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	for(i=size-1;i>=position-1;i--)
	{
		array[i+1]=array[i];			
	}
	array[position-1]=element;
	size++;
	printf("\nAfter inserting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

