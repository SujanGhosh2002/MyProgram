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
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("After sorting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}