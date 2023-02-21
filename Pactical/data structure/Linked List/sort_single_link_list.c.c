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
	struct node *head, *newnode, *temp, *temp1, *tempnext, *x;
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
	printf("Link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	temp=temp1=head;
	while(temp1!=NULL)
	{
		while(temp!=NULL)
		{
			if(temp->data>temp->next->data)
			{
				x->data=temp->data;
				temp->data=temp->next->data;
				temp->next->data=x->data;
			}
			temp=temp->next;
		}
		temp1=temp1->next;
	}
	temp=head;
	printf("\nAfter sorting link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}