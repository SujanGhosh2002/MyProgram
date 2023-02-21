#include<stdio.h>
int main()

{
	int array[100],size,i,position,element;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array element: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Delete position: ");
	scanf("%d",&position);
	printf("Before deleting array element: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	for(i=position-1;i<size-1;i++)
	{
		array[i]=array[i+1];			
	}
	size--;
	printf("\nAfter deleting array element: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}