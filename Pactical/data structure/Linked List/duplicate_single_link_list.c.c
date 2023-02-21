#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int choice,count=0;
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
	while(temp->next!=NULL)
	{
		struct node *ptr=temp->next;
		while(ptr!=NULL)
		{
			if(temp->data==ptr->data)
			{
				count++;
				break;
			}
			else
			{
				ptr=ptr->next;
			}
		}
		temp=temp->next;
	}
	printf("\nDuplicate item: %d",count);		
}