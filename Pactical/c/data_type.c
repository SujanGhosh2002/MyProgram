#include<stdio.h>
#include<limits.h>
int main()
{
	printf("char size = %d\n",sizeof(char));
	printf("int size = %d\n",sizeof(int));
	printf("float size = %d\n",sizeof(float));
	printf("double size = %d\n",sizeof(double));
    printf("sort size = %d\n",sizeof(short));
    printf("short int size = %d\n",sizeof(short int));
    printf("long size = %d\n",sizeof(long));
    printf("long int size = %d\n",sizeof(long int));
    printf("long long int size = %d\n",sizeof(long long int));
	printf("long double size = %d\n",sizeof(long double));

    printf("char minimum value = %d\n",CHAR_MIN);
	printf("char maximum value = %d\n",CHAR_MAX);
	printf("char total value = %d\n",UCHAR_MAX);
		
	printf("int minimum value = %d\n",INT_MIN);
	printf("int maximum value = %d\n",INT_MAX);
	printf("int total value = %u\n",UINT_MAX);

    printf("short minimum value = %d\n",SHRT_MIN);
	printf("short maximum value = %d\n",SHRT_MAX);
	printf("short total value = %u\n",USHRT_MAX);
	
	printf("long minimum value = %ld\n",LONG_MIN);
    printf("long maximum value = %ld\n",LONG_MAX);
    printf("long total value = %lu\n",ULONG_MAX);
    return 0;
}
