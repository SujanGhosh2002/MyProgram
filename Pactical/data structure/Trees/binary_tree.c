
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
};
struct node *create();
void inorder(struct node *root);
void preorder(struct node *root);
void postorder(struct node *root);
void main()
{
	struct node *root=NULL;
	root=create();
	printf("\nInorder: ");
	inorder(root);
	printf("\nPreorder: ");
	preorder(root);
	printf("\nPostorder: ");
	postorder(root);
}
struct node *create()
{
	int item;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter (0 for no node) data: ");
	scanf("%d",&item);
	if(item==0)
	{
		return 0;
	}
	else
	{
		printf("Enter left child of %d ",item);
		newnode->left=create();
		printf("Enter right child of %d ",item);
		newnode->right=create();
		return newnode;
	}
}
void inorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	else
	{
		inorder(root->left);
		printf("%d --> ",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	else
	{
		printf("%d --> ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root)
{
	if(root==0)
	{
		return;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d --> ",root->data);
	}
}