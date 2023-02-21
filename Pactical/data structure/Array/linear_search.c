#include<stdio.h>
int main()
{
	int array[100],size,i,item;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array element: ");
	for(i<0;i<size;i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("Search item: ");
	scanf("%d",&item);
	for(i=0;i<size;i++)
	{
		if(array[i]==item)
		{
			printf("Item found location: %d",i+1);
			break;
		}
	}
	if(array[i]!=item)
	{
		printf("Item not found");
	}
	return 0;
}
