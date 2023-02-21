#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int prime(int data);
int main()
{
	int ch, i, count=0;
	struct node *head, *newnode, *temp;
	head=NULL;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
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
		scanf("%d",&ch);
	}
	while(ch==1);
	temp=head;
	printf("Link list element: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL)
	{
		if(prime(temp->data))
		{
			count++;
		}
		temp=temp->next;
	}
	printf("\n%d prime element in link list",count);
}
int prime(int data)
{
	int i;
	if(data<=1)
	{
		return 0;
	}
	if(data<=3)
	{
		return 1;
	}
	if(data%2==0||data%3==0)
	{
		return 0;
	}
	for(i=5;i*i<=data;i=i+6)
	{
		if(data%i==0||data%(i+2)==0)
		{
			return 0;
		}
		return 1;
	}
}