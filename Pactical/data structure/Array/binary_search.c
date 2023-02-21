#include<stdio.h>
int main()
{
	int array[100],size,i,item,high,low,mid;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array element (sorted): ");
	for(i<0;i<size;i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("Search item: ");
	scanf("%d",&item);
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if (array[mid]==item) 
		{
			printf("Item found location: %d",mid+1);
			break;
		}
		else if (array[mid]<item) 
		{ 
			low=mid+1;				
		}
		else
		{
			high=mid-1;
		}
	}	
	if(array[mid]!=item)
	{
		printf("Item not found");
	}
	return 0;
}
