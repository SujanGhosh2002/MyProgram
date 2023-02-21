#include<stdio.h>
void main()
{
	int size,array[100],i,j,temp,x;
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
	for(i=0;i<size;i++)
	{
		x=i;
		for(j=i+1;j<size;j++)
		{
			if(array[j]<array[x])
			{
				x=j;
			}
		}
		temp=array[i];
		array[i]=array[x];
		array[x]=temp;
	}
	printf("\nAfter sorting array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}