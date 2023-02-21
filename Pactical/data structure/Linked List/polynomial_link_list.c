#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int coeff, expo;
    struct node *next;
};
struct node *s1 = NULL, *s2 = NULL, *s3 = NULL;
void createp1();
void createp2();
void traversep1();
void traversep2();
void polyadd();
void createp3(int, int);
void traversep3();
int main()
{
    int choice, ele;
    while (1)
    {
        printf("\t\t Polynomial Adt Operations \n");
        printf("1.create poly1 \n");
        printf("2.create poly2 \n");
        printf("3.traverselist1\n");
        printf("4.traverselist2\n");
        printf("5.polynomial add\n");
        printf("6.treaverse list \n");
        printf("7.exit\n");
        printf("enter choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createp1();
            break;
        case 2:
            createp2();
            break;
        case 3:
            traversep1();
            break;
        case 4:
            traversep2();
            break;
        case 5:
            polyadd();
            break;
        case 6:
            traversep3();
            break;
        case 7:
            exit(0);
        }
    }
}
void createp1()
{
    struct node *temp, *p;
    char ch;
    do
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter coeff & expo values of a first polynomial term");
        scanf("%d%d", &temp->coeff, &temp->expo);
        temp->next = NULL;
        if (s1 == NULL)
            s1 = temp;
        else if (s1->next == NULL)
            s1->next = temp;
        else
        {
            p = s1;
            while (p->next != NULL)
                p = p->next;
            p->next = temp;
        }
        printf("do you want another term(y/n)\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y');
}
void createp2()
{
    struct node *temp, *p;
    char ch;
    do
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter coeff & expo values of a second polynomial term\n");
        scanf("%d%d", &temp->coeff, &temp->expo);
        temp->next = NULL;
        if (s2 == NULL)
            s2 = temp;
        else if (s2->next == NULL)
            s2->next = temp;
        else
        {
            p = s2;
            while (p->next != NULL)
                p = p->next;
            p->next = temp;
        }
        printf("do you want another term(y/n)\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y');
}
void traversep1()
{
    struct node *p;
    if (s1 == NULL)
        printf("s1 list is empty\n");
    else
    {
        p = s1;
        while (p != NULL)
        {
            if (p->coeff > 0)
                printf("+%dx^%d", p->coeff, p->expo);
            else
                printf("%dx^%d", p->coeff, p->expo);
            p = p->next;
        }
    }
}
void traversep2()
{
    struct node *p;
    if (s2 == NULL)
        printf("s1 list is empty\n");
    else
    {
        p = s2;
        while (p != NULL)
        {
            if (p->coeff > 0)
                printf("+%dx^%d", p->coeff, p->expo);
            else
                printf("%dx^%d", p->coeff, p->expo);
            p = p->next;
        }
    }
}
void polyadd()
{
    struct node *p1, *p2;
    int coef_sum;
    p1 = s1;
    p2 = s2;
    while (p1 != NULL & p2 != NULL)
    {
        if (p1->expo == p2->expo)
        {
            coef_sum = p1->coeff + p2->coeff;
            createp3(coef_sum, p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->expo > p2->expo)
        {
            createp3(p1->coeff, p1->expo);
            p1 = p1->next;
        }
        else
        {
            createp3(p2->coeff, p2->expo);
            p2 = p2->next;
        }
    }
    if (p1 == NULL)
    {
        while (p2 != NULL)
        {
            createp3(p2->coeff, p2->expo);
            p2 = p2->next;
        }
    }
    else if (p2 == NULL)
    {
        while (p1 != NULL)
        {
            createp3(p1->coeff, p1->expo);
            p1 = p1->next;
        }
    }
}
void traversep3()
{
    struct node *p;
    if (s3 == NULL)
        printf("s1 list is empty\n");
    else
    {
        p = s3;
        while (p != NULL)
        {
            if (p->coeff > 0)
                printf("+%dx^%d", p->coeff, p->expo);
            else
                printf("%dx^%d", p->coeff, p->expo);
            p = p->next;
        }
    }
}
void createp3(int c, int e)
{
    struct node *temp, *p;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->coeff = c;
    temp->expo = e;
    temp->next = NULL;
    if (s3 == NULL)
        s3 = temp;
    else if (s3->next == NULL)
        s3->next = temp;
    else
    {
        p = s3;
        while (p->next != NULL)
            p = p->next;
        p->next = temp;
    }
}
