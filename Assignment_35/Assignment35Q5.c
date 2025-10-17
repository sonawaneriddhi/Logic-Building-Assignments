///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which displays addition of digits of elements from singly linear linked list.
//
//      Input Linked List : |110|->|230|->|20|->|240|->|640|
//
//      Output            : 2       5       2       6       10
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

int SumDigit(PNODE head)
{
    int iNo = 0;
    int iSumDigits = 0;

        iNo = head->data;
        
        while(iNo != 0)
        {
            iSumDigits = iSumDigits + iNo % 10;
            iNo = iNo / 10;
        }

        head = head->next;

    return iSumDigits;
}

int main()
{
    PNODE first = NULL;
    PNODE temp = NULL;

    int iRet = 0;

    Insertfirst(&first,640);
    Insertfirst(&first,240);
    Insertfirst(&first,20);
    Insertfirst(&first,230);
    Insertfirst(&first,110);

    temp = first;

    while(temp != NULL)
    {
        iRet = SumDigit(temp);

        printf("%d\t",iRet);

        temp = temp->next;
    }

    return 0;
}