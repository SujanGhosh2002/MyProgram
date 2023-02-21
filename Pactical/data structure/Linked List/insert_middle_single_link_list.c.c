#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void main()
{
	int choice,position,i=1,count=0;
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
		count++;
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\nEnter link list insert position: ");
	scanf("%d",&position);
	if(position>count)
	{
		printf("\nInvalide position");
		return;
	}
	
	else
	{
		temp=head;
		while(i<position-1)
		{
			temp=temp->next;
			i++;
		}
		struct node *positioninsert=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter link list insert value: ");
		scanf("%d",&positioninsert->data);
		positioninsert->next=temp->next;
		temp->next=positioninsert;
	}
	temp=head;
	printf("After inserting link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}