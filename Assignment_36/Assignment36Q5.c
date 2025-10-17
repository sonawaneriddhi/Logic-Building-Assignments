///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which displays largest digits of all element from singly linear linked list.
//
//      Input Linked List : |11|->|20|->|17|->|41|->|22|->|89|
//
//      Output            : 1       2       7       4       2       9
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void DisplayLarge(PNODE first)
{
    int iDigit = 0 , iMax = 0;
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        iMax = 0;
        while(temp->data != 0)
        {
            iDigit = temp->data % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            temp->data = temp->data / 10;
        }

        printf("%d\t",iMax);
        temp = temp->next;
    }
}

void InsertFirst(PPNODE first , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void Display(PNODE first)
{
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        printf("| %d | -> ",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head , 89);
    InsertFirst(&head , 22);
    InsertFirst(&head , 41);
    InsertFirst(&head , 17);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);

    Display(head);

    DisplayLarge(head);

    
    return 0;
}