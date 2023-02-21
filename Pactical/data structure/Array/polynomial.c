#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct polynomial
{
 	int coefficient;
 	int expansion;
	struct polynomial *next;
};
struct polynomial *poly1=NULL,*poly2=NULL,*poly=NULL;
void create(struct polynomial *node)
{
	int choice;
	do
	{
 		printf("Enter coefficient:");
 		scanf("%d",&node->coefficient);
 		printf("Enter expansion:");
 		scanf("%d",&node->expansion);
 		node->next=(struct polynomial*)malloc(sizeof(struct polynomial));
 		node=node->next;
 		node->next=NULL;
 		printf("Do you want to continue? then press 1 : ");
 		scanf("%d",&choice);
	}
	while(choice==1);
}
void show(struct polynomial *node)
{
	while(node->next!=NULL)
	{
 		printf("%dx^%d",node->coefficient,node->expansion);
 		node=node->next;
 		if(node->next!=NULL)
 		printf("+");
	}
}
void polyadd(struct polynomial *poly1,struct polynomial *poly2,struct polynomial *poly)
{
 	while(poly1->next&&poly2->next)
 	{
 		if(poly1->expansion>poly2->expansion)
 		{
 			poly->expansion=poly1->expansion;
 			poly->coefficient=poly1->coefficient;
 			poly1=poly1->next;
 		}
 		else if(poly1->expansion<poly2->expansion)
 		{
 			poly->expansion=poly2->expansion;
 			poly->coefficient=poly2->coefficient;
 			poly2=poly2->next;
 		}
 		else
 		{
 			poly->expansion=poly1->expansion;
 			poly->coefficient=poly1->coefficient+poly2->coefficient;
 			poly1=poly1->next;
 			poly2=poly2->next;
 		}
 		poly->next=(struct polynomial *)malloc(sizeof(struct polynomial));
 		poly=poly->next;
 		poly->next=NULL;
 	}
 	while(poly1->next||poly2->next)
 	{
 		if(poly1->next)
 		{
 			poly->expansion=poly1->expansion;
 			poly->coefficient=poly1->coefficient;
 			poly1=poly1->next;
 		}
 		if(poly2->next)
 		{
 			poly->expansion=poly2->expansion;
 			poly->coefficient=poly2->coefficient;
 			poly2=poly2->next;
 		}
 		poly->next=(struct polynomial *)malloc(sizeof(struct polynomial));
 		poly=poly->next;
 		poly->next=NULL;
 	}
}
void main()
{
 	poly1=(struct polynomial *)malloc(sizeof(struct polynomial));
 	poly2=(struct polynomial *)malloc(sizeof(struct polynomial));
 	poly=(struct polynomial *)malloc(sizeof(struct polynomial));
 	printf("Enter 1st polynomial:-\n");
 	create(poly1);
 	printf("Enter 2nd polynomial:-\n");
 	create(poly2);
 	printf("\n1st polynomial:");
 	show(poly1);
 	printf("\n2nd polynomial:");
 	show(poly2);
 	polyadd(poly1,poly2,poly);
 	printf("\nAdded two polynomial:");
 	show(poly);
}