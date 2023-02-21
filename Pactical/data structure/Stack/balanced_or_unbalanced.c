#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void push(char);
char pop();
char stack[20];
int top=-1;
int main()
{
char expr[20],ch;
int i;
printf("\nEnter an expression\n");
gets(expr);
for(i=0;expr[i]!='\0';i++)
{
ch=expr[i];
if(ch=='(' || ch=='{' || ch=='[')
push(ch);
else if(ch==')')
{
if(top==-1)
{
printf("\nUnbalanced expression");
exit(0);
}
else if( (ch=pop())!='(')
{
printf("\nUnbalanced expression");
exit(0);
}
}
else if(ch=='}')
{
if(top==-1)
{
printf("\nUnbalanced expression");
exit(0);
}
else if( (ch=pop())!='{')
{
printf("\nUnbalanced expression");
exit(0);
}
}
else if(ch==']')
{
if(top==-1)
{
printf("\nUnbalanced expression");
exit(0);
}
else if( (ch=pop())!='[')
{
printf("\nUnbalanced expression");
exit(0);
}
}
}
if(top==-1)
printf("\nBalanced expression");
}
void push(char x)
{
top++;
stack[top]=x;
}
char pop()
{
return stack[top--];
}
