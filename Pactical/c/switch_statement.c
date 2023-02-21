#include<stdio.h>
int main()
{
    int choice;
    printf("Enter any choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("Monday");
        break;
    case 2: printf("Tuesday");
        break;
    case 3: printf("Wednesday");
        break;
    case 4: printf("Thusday");
        break;
    case 5: printf("Friday");
        break;
    case 6: printf("Sataday");
        break;
    case 7: printf("Sunday");
        break;
    default: printf("Invalid choice");
        break;
    }
    return 0;
}