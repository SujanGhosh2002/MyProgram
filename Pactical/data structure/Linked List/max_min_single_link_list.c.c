#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int choice,max,min;
	struct node *head, *newnode, *temp;
	head=NULL;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&choice);
	}
	while(choice==1);
	temp=head;
	printf("Link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	temp=head;
	max=temp->data;
	while(temp!=NULL)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}	
		else
		{
			temp=temp->next;
		}
	}
	printf("\nMaximum item: %d",max);
	temp=head;
	min=temp->data;
	while(temp!=NULL)
	{
		if(temp->data<min)
		{
			min=temp->data;
		}
		else
		{
			temp=temp->next;
		}
	}
	printf("\nMinimum item: %d",min);	
}