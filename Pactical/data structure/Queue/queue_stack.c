#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack1[size],stack2[size],top1=-1,top2=-1,count=0;
void push();
void pop();
void enque();
void deque();
void display();
void main()
{
	int choice,item;
	printf("1. ENQUE\n");
	printf("2. DEQUE\n");
//	printf("3. PEEK\n");
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
//			case 3:peek();
//					break;
			case 3:display();
					break;
			case 4:exit(0);
					break;
			default:printf("Invalide option");
		}
	}
}
void enque()
{	
	printf("Push element in stack: ");
	scanf("%d",&item);
	push1(item);
	count++;
}
void deque()
{
	int i,x,y;
	if(top1==-1&&top2==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		for(i=0;i<count;i++)
		{
			x=pop1();
			push2(x);
		}
		y=pop2();
		printf("Front element: %d",y);
		count--;
		for(i=0;i<count;i++)
		{
			x=pop2();
			push1(x);
		}
	}
}                             
void display()
{
//	if(top1==-1)
//	{
//		printf("Stack is empty");
//	}
//	else
//	{
		printf("Stack elements: ");
		for(int i=0;i>=top1;i++)
		{
			printf("%d\t",stack1[i]);
		}
//	}
}
void push1(item)
{	
	if(top1==size-1)
	{
		printf("Stack is full");
	}
	else
	{
		top1=top1+1;
		stack1[top1]=item;
	}
}
void push2(item)
{	
	if(top2==size-1)
	{
		printf("Stack is full");
	}
	else
	{
		top2=top2+1;
		stack1[top2]=s;
	}
}
int pop1()
{
	if(top1==-1)
	{
		printf("Stack is empty");
	}
	else
	{;
		return stack1[top1--];
	}
}  
int pop2()
{
	if(top2==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		return stack2[top2--];
	}
}   