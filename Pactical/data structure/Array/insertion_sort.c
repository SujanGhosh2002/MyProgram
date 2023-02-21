#include<stdio.h>
void main()
{
	int size,array[100],i,j,temp;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array element: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Before sorting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=1;i<size;i++)
	{
		x=array[i];
		for(j=i-1;(j>=0 && array[j]>x);j--)
		{
			array[j+1]=array[j];
		}
		array[j+1]=x;
	}
	printf("\nAfter sorting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}