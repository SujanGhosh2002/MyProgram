//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice,item;
//	struct node *head, *newnode, *temp, *temp1, *tempnext, *x;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=temp1=head;
//	while(temp1!=NULL)
//	{
//		while(temp!=NULL)
//		{
//			if(temp->data>temp->next->data)
//			{
//				x->data=temp->data;
//				temp->data=temp->next->data;
//				temp->next->data=x->data;
//			}
//			temp=temp->next;
//		}
//		temp1=temp1->next;
//	}
//	printf("\nAfter link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}



































//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice,item;
//	struct node *head, *newnode, *temp, *prev;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=NULL;
//	prev=NULL;
//	while(head!=NULL)
//	{
//		temp=head->next;
//		head->next=prev;
//		prev=head;
//		head=temp;
//	}
//	printf("\nAfter link list element: ");
//	temp=prev;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}































//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice,item;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	temp=head;
//	printf("Enter search item: ");
//	scanf("%d",&item);
//	do
//	{
//		if(temp->data==item)
//		{
//			printf("%d Item found location %d",item,temp);
//			break;
//		}
//		else
//		{
//			temp=temp->next;
//		}
//	}while(temp!=NULL);
//	if(temp==NULL)
//	{
//		printf("%d Item not found",item);
//	}
//	return 0;
//}





























//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=head;
//	while(temp->next->next!=NULL)
//	{
//		temp=temp->next;
//	}
//	printf("\nDeleting value: %d",temp->next->data);
//	temp->next=NULL;
//	printf("\nAfter inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}
























//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice,i=1,position;
//	struct node *head, *newnode, *temp, *nextnode;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=head;
//	printf("\nEnter link list delete position: ");
//	scanf("%d",&position);
//	temp=head;
//	while(i<position-1)
//	{
//		temp=temp->next;
//		i++;
//	}
//	printf("Deleting value: %d",temp->next->data);
//	nextnode=temp->next;
//	temp->next=nextnode->next;
//	printf("\nAfter inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}






















//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=head;
//	printf("\nDeleteing value %d",head->data);
//	head=head->next;
//	
//	printf("\nAfter inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}

























//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=head;
//	while(temp->next!=NULL)
//	{
//		temp=temp->next;
//	}
//	struct node *lastinsert=(struct node*)malloc(sizeof(struct node));
//	printf("\nEnter lastinsert data: ");
//	scanf("%d",&lastinsert->data);
//	temp->next=lastinsert;
//	lastinsert->next=NULL;
//	printf("After inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}






















//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice,count=0,i=1,position;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Before inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		count++;
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	printf("Enter middleinsert position: ");
//	scanf("%d",&position);
//	if(position>count)
//	{
//		printf("Invalid position");
//	}
//	else
//	{
//		temp=head;
//		while(i<position-1)
//		{
//			temp=temp->next;
//			i++;
//		}
//		struct node *middleinsert=(struct node*)malloc(sizeof(struct node));
//		printf("\nEnter middle insert value: ");
//		scanf("%d",&middleinsert->data);
//		middleinsert->next=temp->next;
//		temp->next=middleinsert;		
//	}
//	printf("After inserting link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}



























//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice;
//	struct node *head, *newnode, *temp; 
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}
//	while(choice==1);
//	temp=head;
//	printf("Before inserting link list element: ");
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	temp=head;
//	struct node *firstinsert=(struct node*)malloc(sizeof(struct node));
//	printf("\nEnter firstinsert data: ");
//	scanf("%d",&firstinsert->data);
//	firstinsert->next=head;
//	head=firstinsert;
//	temp=head;
//	printf("After inserting link list element: ");
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}


























//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice, count=0;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*)malloc(sizeof(struct node));
//		printf("Enter Data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;    
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		count++;
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	printf("\nNo of list element: %d",count);
//	return 0;
//}




















//Q. WAP to create a single link list program?
//#include<stdio.h>
//#include<stdlib.h>
//struct node
//{
//	int data;
//	struct node *next;
//};
//int main()
//{
//	int choice;
//	struct node *head, *newnode, *temp;
//	head=NULL;
//	do
//	{
//		newnode=(struct node*) malloc (sizeof(struct node));
//		printf("Enter data: ");
//		scanf("%d",&newnode->data);
//		newnode->next=NULL;
//		if(head==NULL)
//		{
//			head=temp=newnode;
//		}
//		else
//		{
//			temp->next=newnode;
//			temp=newnode;
//		}
//		printf("Do you want to continue? then press 1: ");
//		scanf("%d",&choice);
//	}while(choice==1);
//	printf("Link list element: ");
//	temp=head;
//	while(temp!=NULL)
//	{
//		printf("%d\t",temp->data);
//		temp=temp->next;
//	}
//	return 0;
//}