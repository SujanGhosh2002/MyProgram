#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int choice;
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
		temp=temp->next;
	}
	struct node *lastinsert=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter link list last insert value: ");
	scanf("%d",&lastinsert->data);
	temp->next=lastinsert;
	lastinsert->next=NULL;
	temp=head;
	printf("After inserting link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}