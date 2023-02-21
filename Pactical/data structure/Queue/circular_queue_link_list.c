#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL, *rear=NULL;
void enque();
void deque();
void peek();
void display();
void main()
{
	int choice;
	printf("1. REAR\n");
	printf("2. FRONT\n");
	printf("3. PEEK\n");
	printf("4. DISPLAY\n");
	printf("5. EXIT\n"); 
 	while(1) 
 	{ 
 		printf("\nEnter choice: "); 
 		scanf("%d",&choice); 
 		switch(choice) 
 		{ 
 			case 1:enque(); 
 				break; 
 			case 2:deque(); 
 				break; 
 			case 3:peek();
 				break;
 			case 4:display(); 
 				break; 
 			case 5:exit(0); 
 				break; 
 			default: 
 			printf("Invalide option"); 
 		} 
 	}
}
void enque()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter rear element in queue: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL; 
	if(rear==NULL&&front==NULL)
	{
		front=rear=newnode;
		rear->next=front;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}
void deque()
{
	struct node *temp;
	if(rear==NULL&&front==NULL)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		temp=front;
		printf("Front element: %d",front->data);
		front=rear=NULL;
		free(temp);
	}
	else
	{
		temp=front;
		printf("Front element: %d",front->data);
		front=front->next;
		rear->next=front;
		free(temp);
	}
}  
void peek()
{
	if(rear==NULL&&front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Front element: %d",front->data);
	} 
} 
void display()
{
	struct node *temp;
	if(rear==NULL&&front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		temp=front;
		printf("queue elements: ");
		while(temp->next!=front)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}