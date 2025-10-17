///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which returns addition of all element from singly linear linked list.
//
//      Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
//
//      Output            : 250
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

int Addition(PNODE head)
{
    int iSum = 0;
    while(head->next != NULL)
    {
        iSum = iSum + head->data;
        head = head->next;
    }

    return iSum;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first,70);
    Insertfirst(&first,30);
    Insertfirst(&first,50);
    Insertfirst(&first,40);
    Insertfirst(&first,30);
    Insertfirst(&first,20);
    Insertfirst(&first,10);

    iRet = Addition(first);
    printf("Addition of all elements in singly linear linked list is : %d ",iRet);
    return 0;
}