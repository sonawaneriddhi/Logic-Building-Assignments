///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which returns largest of all element from singly linear linked list.
//
//      Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
//
//      Output            : 70
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

int Maximum(PNODE head)
{
    int iMax = 0;
    while(head != NULL)
    {
        if(head->data > iMax)
        {
            iMax = head->data;
        }
        head = head->next;
    }

    return iMax;
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

    iRet = Maximum(first);
    printf("Largest element in singly linear linked list is : %d",iRet);
    return 0;
}