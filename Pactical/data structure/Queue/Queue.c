#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front=-1,rear=-1;
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
			default:printf("Invalide option");
		}
	}
}
void enque()
{	
	int item;
	if(rear==size-1)
	{
		printf("Queue is full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		printf("Enter rear element in queue: ");
		scanf("%d",&item);
		printf("Inserted element: %d",item);
		rear++;
		queue[rear]=item;
	}
}
void deque()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Front element: %d",queue[front]);
		if(front==rear)
		front=rear=-1;
		else
		front++;
	}
} 
void peek()
{
	if(front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Front element: %d",queue[front]);
	} 
}                            
void display()
{
	if(rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("queue elements: ");
		for(int i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
