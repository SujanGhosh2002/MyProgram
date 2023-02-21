#include<stdio.h>
int main()
{
	int t,n,x,i,s,m;
	printf("Enter T:");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		printf("\nEnter N:");
		scanf("%d",&n);
		printf("Enter X:");
		scanf("%d",&x);
		s=(x*n);
		m=(s/4);
		if(s%4==0)
		printf("Solution: %d",m);
		else
		printf("Solution: %d",m+1);
	}
	return 0;
}