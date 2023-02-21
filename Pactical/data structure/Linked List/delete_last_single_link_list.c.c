#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	struct node *head, *newnode, *temp;
	head=NULL;
	int choice;
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
	struct node *temp1, *temp2;
	temp1=head;
	temp2=head;
	while(temp2->next!=NULL)
	{
		temp1=temp2;
		temp2=temp2->next;
	}
	printf("\nLink list last deleted value is :%d \n",temp2->data);
	temp1->next=NULL;
	temp=head;
	printf("After deleteing link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}