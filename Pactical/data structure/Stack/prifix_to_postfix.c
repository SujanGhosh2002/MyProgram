#include<stdio.h>
#include<ctype.h>
char stack[50];
int top=-1;
void push(char elem)
{
	stack[++top]=elem;
}
char pop()
{
	return(stack[top--]);
}
int pr(char elem)
{
 	switch(elem)
 	{
 		case '#': return 0;
 		case '(': return 1;
 		case '+':
 		case '-': return 2;
 		case '*':
 		case '/': return 3;
 	}
}
void main()
{
 	char infix[50],postfix[50],ch,elem;
 	int i=0,k=0;
 	printf("Enter infix expression: ");
 	scanf("%s",infix);
 	push('#');
 	while((ch=infix[i++])!='\0')
 	{
		if(ch=='(')
		push(ch);
 		else if(isalnum(ch))
		postfix[k++]=ch;
 		else if(ch==')')
		{
 			while(stack[top]!='(')
 			postfix[k++]=pop();
 			elem=pop();
		}
		else
		{
 			while(pr(stack[top])>=pr(ch))
			postfix[k++]=pop();
 			push(ch);
		}
 	}
 	while(stack[top]!='#') 
 	{
 		postfix[k++]=pop();
	}
 	postfix[k]='\0'; 
 	printf("Postfix expression: %s",postfix);
}
