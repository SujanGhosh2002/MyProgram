// #include<stdio.h>
// int main()
// {
//     int size,i;
//     printf("Enter size: ");
//     scanf("%d", &size);
//     for (i=0;i<=size;i++)
//     {
//         if (i==5)
//         {
//             break;
//         }
//         printf("%d\n",i);
//     }
    
// }

// #include<stdio.h>
// int main()
// {
//     int size,i;
//     printf("Enter size: ");
//     scanf("%d", &size);
//     for (i=0;i<=size;i++)
//     {
//         if (i==5)
//         {
//             continue;;
//         }
//         printf("%d\n",i);
//     }
    
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,i;
    printf("Enter size: ");
    scanf("%d", &size);
    for (i=0;i<=size;i++)
    {
        if (i==5)
        {
            exit(0);
        }
        printf("%d\n",i);
    }
    
}