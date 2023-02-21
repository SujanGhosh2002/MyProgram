#include<stdio.h>
int main()
{
    int num;
	printf("int size = %d\n",sizeof(int));
	printf("float size = %d\n",sizeof(float));
	printf("int value 10 size = %d\n",sizeof(10));
    printf("int variable size = %d\n",sizeof(num));
    return 0;
}