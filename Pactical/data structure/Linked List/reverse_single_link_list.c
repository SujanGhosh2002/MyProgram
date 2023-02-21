#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	struct node *head, *newnode, *temp, *prev;
	head=NULL;
	int choice, position, i;
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
	temp=0;
	prev=0;
	while(head!=NULL)
	{
		temp=head->next;
		head->next=prev;
		prev=head;
		head=temp;	
	}
	head=prev;	
	printf("\nReverses link list element: ");
	while(prev!=NULL)
	{
		printf("%d\t",prev->data);
		prev=prev->next;
	}
}