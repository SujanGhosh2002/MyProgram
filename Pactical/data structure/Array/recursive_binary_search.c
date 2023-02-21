#include<stdio.h>
int binary_search(int array[],int size,int item);
int main()
{
	int array[100],size,i,item;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array element (sorted) : ");
	for(i<0;i<size;i++)
	{
		scanf("%d",&array[i]);	
	}
	printf("Search item: ");
	scanf("%d",&item);
	int x=binary_search(array,size,item);
	if(x!=-1)
	{
		printf("Item found location: %d",x+1);
	}
	else
	{
		printf("Item not found");
	}
	return 0;
}
int binary_search(int array[],int size,int item)
{
	size--;
	if(size<0)
	{
		return -1;
	}
	if(array[size]==item)
	{
		return size;
	}
	return binary_search(array,size,item);
}