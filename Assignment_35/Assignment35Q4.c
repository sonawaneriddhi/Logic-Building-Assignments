///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which returns second largest of all element from singly linear linked list.
//
//      Input Linked List : |110|->|230|->|320|->|240|
//
//      Output            : 240
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

int SecMaximum(PNODE head)
{
    int iMax = 0;
    int iSecMax = 0;

    while(head != NULL)
    {
        if(iMax < head->data)
        {
            iSecMax = iMax;
            iMax = head->data;
        }
        else if(iSecMax < head->data)
        {
            iSecMax = head->data;
        }

        head = head->next;
    }

    return iSecMax;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Insertfirst(&first,240);
    Insertfirst(&first,320);
    Insertfirst(&first,230);
    Insertfirst(&first,110);

    iRet = SecMaximum(first);

    printf("Second Largest element in singly linear linked list is : %d",iRet);
    
    return 0;
}