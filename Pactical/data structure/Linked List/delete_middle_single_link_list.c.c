#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	struct node *head, *newnode, *temp, *nextnode;
	head=NULL;
	int choice, position, i=1;
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
	printf("\nEnter link list delete position: ");
	scanf("%d",&position);
	temp=head;
	while(i<position-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;	
	temp=head;
	printf("After deleting link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}