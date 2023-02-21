//#include<stdio.h>
//#include<stdlib.h>
//#define size 5
//int dequeue[size];
//int front=-1,rear=-1,item;
//void insert_front();
//void insert_rear();
//void delete_front();
//void delete_rear();
//void peek_front();
//void peek_rear();
//void display();
//void main()
//{
//	int choice;
//	printf("\n 1.INSERT FRONT");
//	printf("\n 2.INSERT REAR");
//	printf("\n 3.DELETE FRONT");
//	printf("\n 4.DELETE REAR");
//	printf("\n 5.PEEK FRONT");
//	printf("\n 6.PEEK REAR");
//	printf("\n 7.DISPLAY");
//	printf("\n 8.EXIT");
//	while(1)
//	{
//		printf("\nEnter choice:");
//		scanf("%d",&choice);
//		switch(choice)
//		{
//			case 1:insert_front();
// 				break;
//			case 2:insert_rear();
// 				break;
//			case 3:delete_front();
// 				break;
//			case 4:delete_rear();
// 				break;
//			case 5:peek_front();
// 				break;
// 			case 6:peek_rear();
// 				break;
//			case 7:display();
// 				break;
//			case 8:exit(0);
//		}
//	}
//}
//void insert_front()
//{
//	if((front==0&&rear==size-1)||(front==rear+1))
//	{
//		printf("Double ended circular queue is full");
//	}
//	else 
//	{
//		printf("Enter rear element in double ended circular queue: ");
//		scanf("%d",&item);
//		if(front==-1&&rear==-1)
//		{
//			rear++;
//			front++;
//		}
//		else if(front==0)
//		{
//			front=size-1;
//		}
//		else
//		{
//			front--;
//		}
//		dequeue[rear]=item;
//	}
//}
//void insert_rear()
//{
//	if((front==0&&rear==size-1)||(front==rear+1))
//	{
//		printf("Double ended circular queue is full");
//	}
//	else 
//	{
//		printf("Enter rear element in double ended circular queue: ");
//		scanf("%d",&item);
//		if(front==-1&&rear==-1)
//		{
//			rear++;
//			front++;
//		}
//		else if(rear=size-1)
//		{
//			rear=0;
//		}
//		else
//		{
//			rear++;
//		}
//		dequeue[rear]=item;
//	}
//}
//void delete_front()
//{
//	if(front==-1&&rear==-1)
//	{
//		printf("Double ended circular queue is empty ");	
//	}
//	else
// 	{
// 		printf("Deleted element: %d",dequeue[front]);
// 		if(front==rear)
// 		{
// 			front=rear=-1;
//		}
//		else if(front=size-1)
//		{
//			front=0;
//		}
//		else
//		{
//			front++;
//		}
// 	}
//}
//void delete_rear()
//{
//	if(front==-1&&rear==-1)
//	{
//		printf("Double ended circular queue is empty ");	
//	}
//	else
// 	{
// 		printf("Deleted element: %d",dequeue[rear]);
// 		if(front==rear)
// 		{
// 			front=rear=-1;
//		}
//		else if(rear==0)
//		{
//			rear=size-1;
//		}
//		else
//		{
//			rear=rear-1;
//		}
// 	}
//}
//void peek_front()
//{
//	if(front==-1&&rear==-1)
//	{
//		printf("Double ended circular queue is empty");
//	}
//	
//	else
//	{
//		printf("Double ended circular queue peek front element: %d", dequeue[front]);
//	}
//}
//void peek_rear()
//{
//	if(front==-1&&rear==-1)
//	{
//		printf("Double ended circular queue is empty");
//	}
//	else
//	{
//		printf("Double ended circular queue peek rear element: %d", dequeue[rear]);
//	}
//}
//void display()
//{
//	int i;
//	if(front==-1&&rear==-1)
//	{
//		printf("Double ended circular queue is empty");
//	}
//	else
//	{
//		i=front;
//		printf("Double ended circular queue elements: ");
//		while(i!=rear)
//		{
// 			printf("%d\t",dequeue[i]);
// 			i=(i+1)%size;
//		}
//		printf("%d\t",dequeue[rear]);
//	}
//}






#include<stdio.h>
#include<stdlib.h>
#define size 5
int dequeue[size];
int front=-1,rear=-1,item;
void insert_front();
void insert_rear();
void delete_front();
void delete_rear();
void display();
void main()
{
	int choice;
	printf("\n 1.INSERT_FRONT:");
	printf("\n 2.INSERT_REAR:");
	printf("\n 3.DELETE_FRONT:");
	printf("\n 4.DELETE_REAR:");
	printf("\n 5.DISPLAY");
	printf("\n 6.EXIT");
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
			case 5:display();
 				break;
			case 6:exit(0);
		}
	}
}
void insert_front()
{
	if((front==0&&rear==size-1)||(front==rear+1))
	{
		printf("Double ended queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		printf("Enter front insert element in double circular ended  queue: ");
		scanf("%d",&item);
		dequeue[front]=item;
	}
	else if (front==0)
	{
		front=size-1;
		printf("Enter front insert element in double circular ended  queue: ");
		scanf("%d",&item);
		dequeue[front]=item;
	}
	else
	{
		front--;
		printf("Enter front insert element in double circular ended  queue: ");
		scanf("%d",&item);
		dequeue[front]=item;
	}		
}
void insert_rear()
{
	if((front==0&&rear==size-1)||(front==rear+1))
	{
		printf("Double ended queue is full");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		printf("Enter front insert element in double circular ended  queue: ");
		scanf("%d",&item);
		dequeue[rear]=item;
	}
	else if (rear==size-1)
	{
		rear=0;
		printf("Enter front insert element in double circular ended  queue: ");
		scanf("%d",&item);
		dequeue[rear]=item;
	}
	else
	{
		rear--;
		printf("Enter front insert element in double ended circular queue: ");
		scanf("%d",&item);
		dequeue[rear]=item;
	}
}
void delete_front()
{
	if(front==-1&&rear==-1)
	{
		printf("Double ended circular queue is empty");
	}
	else if(front==rear)
 	{
 		printf("Deleted element: %d",dequeue[rear]);
 		front=rear=-1;
 	}
// 	else if(rear==0)
// 	{
// 		printf("Deleted element: %d",dequeue[rear]);
// 		rear=size-1;
// 	}
//	else
// 	{
//		printf("Deleted element: %d",dequeue[rear]);
//		rear++;
// 	}
 	else
 	{
		printf("Deleted element: %d",dequeue[rear]);
		rear=(rear+1)%size;
 	}
}
void delete_rear()
{
	if(front==-1&&rear==-1)
	{
		printf("Double ended circular queue is empty");
	}
	else if(front==rear)
 	{
 		printf("Deleted element: %d",dequeue[front]);
 		front=rear=-1;
 	}
// 	else if(front==size-1)
// 	{
// 		printf("Deleted element: %d",deque[front]);
// 		front=0;
// 	}
// 	else
// 	{
//		printf("Deleted element: %d",deque[front]);
//		front=++;
// 	}
 	else
 	{
		printf("Deleted element: %d",dequeue[front]);
		front=(front+1)%size;
 	}
}
void peek_front()
{
	if(front==-1&&rear==-1)
	{
		printf("Double ended circular queue is empty");
	}
	
	else
	{
		printf("Double ended circular queue peek front element: %d", dequeue[front]);
	}
}
void peek_rear()
{
	if(front==-1&&rear==-1)
	{
		printf("Double ended circular queue is empty");
	}
	else
	{
		printf("Double ended circular queue peek rear element: %d", dequeue[rear]);
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("Double ended circular queue is empty");
	}
	else
	{
		i=front;
		printf("Double ended queue circular elements: ");
		while(i!=rear)
		{
 			printf("%d\t",dequeue[i]);
 			i=(i+1)%size;
		}
		printf("%d\t",dequeue[rear]);
	}
}
