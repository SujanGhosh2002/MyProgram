#include<stdio.h>
int g; //global
int main()
{
    int l; //local
    static int s; //static
    printf("%d\n",g); //0
    printf("%d\n",l); //garbage
    printf("%d\n",s); //0
    return 0;
}