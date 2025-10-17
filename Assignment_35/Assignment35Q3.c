///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which returns addition of all even elements from singly linear linked list.
//
//      Input Linked List : |11|->|20|->|32|->|41|
//
//      Output            : 52
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Insertfirst(PPNODE head,int iNo)
{  
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

int EvenAddition(PNODE head)
{
    int iSum = 0;

    while(head->next != NULL)
    {
        if((head->data % 2) == 0)
        {
            iSum = iSum + head->data;
        }
        head = head->next;
    }

    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first,41);
    Insertfirst(&first,32);
    Insertfirst(&first,20);
    Insertfirst(&first,11);

    iRet = EvenAddition(first);

    printf("Addition of all even elements in singly linear linked list is : %d \n",iRet);
    return 0;
}