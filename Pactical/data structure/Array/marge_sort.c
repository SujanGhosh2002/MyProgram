#include <stdio.h>
#include <stdlib.h>
void merge_sort(int array[],int low,int high);
void merge(int array[],int low,int mid,int high);
void display(int array[], int size);
int main()
{
	int array[100],size,i;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array Element: ");
	for(i<0;i<size;i++)
	{
		scanf("%d",&array[i]);	
	}
	merge_sort(array,0,size-1);
	printf("Sorting array elements: ");
	display(array,size);
	return 0;
}
void merge_sort(int array[],int low,int high)
{
	if (low<high) 
	{
		int mid=low+(high-low)/2;
		merge_sort(array,low,mid);
		merge_sort(array,mid+1,high);
		merge(array,low,mid,high);
	}
}
void merge(int array[],int low,int mid,int high)
{
	int i,j,k;
	int array1=mid-low+1;
	int array2=high-mid;
	int left[array1],right[array2];
	for(i=0;i<array1;i++)
	{
		left[i]=array[low+i];
	}
	for(j=0;j<array2;j++)
	{
		right[j]=array[mid+1+j];
	}
	i=0;
	j=0;
	k=low;
	while(i<array1&&j<array2) 
	{
		if (left[i]<=right[j]) 
		{
			array[k]=left[i];
			i++;
		}
		else 
		{
			array[k]=right[j];
			j++;
		}
		k++;
	}
	while(i<array1) 
	{
		array[k]=left[i];
		i++;
		k++;
	}
	while(j<array2) 
	{
		array[k]=right[j];
		j++;
		k++;
	}
}
void display(int array[], int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%d\t",array[i]);
	}
}









//#include<stdio.h>
//void marge(int array[],int low,int mid,int high);
//void marge_sort(int array[],int low,int high);
//void display(int array[],int size);
//int main()
//{
//	int array[100],size,i;
//	printf("Array size: ");
//	scanf("%d",&size);
//	printf("Array Element: ");
//	for(i<0;i<size;i++)
//	{
//		scanf("%d",&array[i]);	
//	}
//	marge_sort(array,0,size-1);
//	printf("Sorting array elements: ");
//	display(array,size);
//	return 0;
//}
//void marge_sort(int array[],int low,int high)
//{
//	int mid;
//	if(low<high)
//	{
//		mid=low+(high-low)/2;
//		marge_sort(array,low,high);
//		marge_sort(array,mid+1,high);
//		marge(array,low,mid,high);
//	}
//}
//void marge(int array[],int low,int mid,int high)
//{
//	int i=0,j=0,k=1,size1,size2,left[100],right[100];
//	size1=mid-low+1;
//	size2=high-mid;
//	for(i=0;i<size1;i++)
//	{
//		left[i]=array[low+i];
//	}
//	for(j=0;j<size2;j++)
//	{
//		left[j]=array[mid+1+j];
//	}
//	while(i<size1&&j<size2)
//	{
//		if(left[i]<=right[j])
//		{
//			array[k]=left[i];
//			i++;
//		}
//		else
//		{
//			array[k]=right[j];
//			j++;
//		}
//		k++;
//		while(j<=high)
//		{
//			array[k++]=left[i++];
//		}
//		while(i<=mid)
//		{
//			array[k++]=right[j++];
//		}
//	}
//}
//void display(int array[],int size)
//{
//	int i;
//	for(i=0;i<size;i++)
//	{
//		printf("%d",array[i]);
//	}
//}








//#include<stdio.h>
//marge(int array[],int low,int mid,int high);
//marge_sort(int array[],int low,int high);
//
//int main()
//{
//	int array[100],size,i;
//	printf("Array size: ");
//	scanf("%d",&size);
//	printf("Array Element: ");
//	for(i<0;i<size;i++)
//	{
//		scanf("%d",&array[i]);	
//	}
//	marge_sort(array,0,size-1);
//	printf("Sorting elements: ")
//	for(i=0;i<size;i++)
//	{
//		printf("%d",array[i]);
//	}
//}
//void marge(int array[],int low,int mid,int high)
//{
//	int i=0,j=0,k=1,size1,size2,left[100],right[100];
//	size1=mid-low+1;
//	size2=high-mid;
//	for(i=0;i<size1;i++)
//	{
//		left[i]=array[low+i];
//	}
//	for(j=0;j<size2;j++)
//	{
//		left[j]=array[mid+1+j];
//	}
//	while(i<size1&&j<size2)
//	{
//		if(left[i]<=right[j])
//		{
//			array[k]=left[i];
//			i++;
//		}
//		else
//		{
//			array1[k]=right[j];
//			j++;
//		}
//		k++;
//		while(j<=high)
//		{
//			array[k++]=left[i++];
//		}
//		while(i<=mid)
//		{
//			array[k++]=right[j++];
//		}
////		for(k=low;k<=high;k++)
////		{
////			array[k]=array1[k];
////		}
//	}
//	
//}
//void marge_sort(int array[],int low,int high)
//{
//	int mid;
//	if(low<high)
//	{
//		mid=(low+high)/2;
//		marge_sort(array,low,high);
//		marge_sort(array,mid+1,high);
//		marge(array,low,mid,high);
//	}
//}
//void display(int array[],int size)
//{
//	int i;
//	for(i=0;i<size;i++)
//	{
//		printf("%d",array[i]);
//	}
//}