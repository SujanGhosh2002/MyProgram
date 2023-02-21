#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int main()
{
	int ch, i, count=0;
	struct node *start1, *start2, *head, *newnode, *temp;
	head=start1=start2=NULL;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter first link list data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start1==NULL)
		{
			start1=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&ch);
	}
	while(ch==1);
	temp=start1;
	printf("First link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter second link list data: ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(start2==NULL)
		{
			start2=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to continue? then press 1 : ");
		scanf("%d",&ch);
	}
	while(ch==1);
	temp=start2;
	printf("Second link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	temp=start1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=start2;
	head=start1;
	temp=head;
	printf("\nMerging link list elements: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}

}