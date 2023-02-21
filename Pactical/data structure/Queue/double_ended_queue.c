#include<stdio.h>
#include<stdlib.h>
#define size 5
int dequeue[size];
int front=-1,rear=-1,item;
void insert_front();
void insert_rear();
void delete_front();
void peek_front();
void peek_rear();
void delete_rear();
void display();
void main()
{
	int choice;
	printf("\n 1.INSERT_FRONT:");
	printf("\n 2.INSERT_REAR:");
	printf("\n 3.DELETE_FRONT:");
	printf("\n 4.DELETE_REAR:");
	printf("\n 5.DELETE_REAR:");
	printf("\n 6.DELETE_REAR:");
	printf("\n 7.DISPLAY");
	printf("\n 8.EXIT");
	while(1)
	{
		printf("\nEnter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert_front();
 				break;
			case 2:insert_rear();
 				break;
			case 3:delete_front();
 				break;
			case 4:delete_rear();
 				break;
 			case 5:peek_front();
 				break;
			case 6:peek_rear();
 				break;
			case 7:display();
 				break;
			case 8:exit(0);
		}
	}
}
void insert_front()
{
	if(front==0)
	{
		printf("Double ended queue is full");
	}
	else
	{
		printf("Enter front insert element in double ended queue: ");
		scanf("%d",&item);
		if(front==-1 && rear==-1)
		{
			front++;
			rear++;
		}
		else
		{
			front--;
		}
		dequeue[front]=item;
	}
}
void insert_rear()
{
	if(rear==size-1)
	{
		printf("Double ended queue is full");
	}
	else
	{
		printf("Enter rear insert element in double ended queue: ");
		scanf("%d",&item);
		if(front==-1 && rear==-1)
		{
			front++;
			rear++;
		}
		else
		{
			rear++;
		}
		dequeue[rear]=item;
	}
}
//void insert_rear()
//{
//	if(rear==size-1)
//	{
//		printf("Double ended queue is full");
//	}
//	else
//	{
//		rear=rear+1;
//		printf("Enter rear insert element in double ended queue: ");
//		scanf("%d",&item);
//		dequeue[rear]=item;
//		if(front==-1)
//		front=0;
//	}
//}
//void delete_front()
//{
//	if(front==-1 || front>rear)
//	{
//		printf("Double ended queue is empty");
//	}
//	else
//	{
//		item=dequeue[front];
//		printf("Front delete element: %d",item);
//		front++;
//	}
//}
void delete_front()
{
	if(front==-1)
	{
		printf("Double ended queue is empty");
	}
	else
	{
		item=dequeue[front];
		printf("Front delete element: %d",item);
		if(front==rear)
		front=rear=-1;
		else
		front++;
	}
}
void delete_rear()
{
	if(rear==-1)
	{
		printf("Double ended queue is empty");
	}
	else
	{
		item=dequeue[rear];
		printf("Rear delete element: %d",item);
		if(front==rear)
		front=rear=-1;
		else
		rear--;
	}
}
void peek_front()
{
	if(front==-1)
	{
		printf("Double ended queue is empty");
	}
	
	else
	{
		printf("Double ended queue peek front element: %d", dequeue[front]);
	}
}
void peek_rear()
{
	if(rear==-1)
	{
		printf("Double ended queue is empty");
	}
	else
	{
		printf("Double ended queue peek rear element: %d", dequeue[rear]);
	}
}

void display()
{
	int i;
	if(front==-1)
	printf("Double ended queue is empty");
	else
	{
		printf("Double ended queue elements: ");
		for(i=front;i<=rear;i++)
		{
 			printf("%d\t", dequeue[i]);
		}
	}
}
