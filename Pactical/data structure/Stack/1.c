#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int * array;
};
int isEmpty(struct stack * ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull(struct stack * ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	struct stact *s = (struct stack *)malloc(sizeof(struct stack));
	s->size=10;
	s->top=-1;
	s->array=(int *)malloc(s->size * sizeof(int));
	printf("Stack has been created successfully\n");
	
}