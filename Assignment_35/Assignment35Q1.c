///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which displays the perfect element from singly linear linked list.
//
//      Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|
//
//      Output            : 6       28
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

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

void DisplayPerfect(PNODE head)
{
    int iSum = 0;
    int iCnt = 0;
    int iNo = head->data;

    while(head != NULL)
    {
        iSum = 0;
        iNo = head->data;
        for(iCnt = 1; iCnt <= ( iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == iNo)
        {
            printf("%d\t",iNo);
        }

        head = head->next;
    }   
}

int main()
{
    PNODE first = NULL;
    int iSearch = 0;
    int iRet = 0;
    Insertfirst(&first,89);
    Insertfirst(&first,6);
    Insertfirst(&first,41);
    Insertfirst(&first,17);
    Insertfirst(&first,28);
    Insertfirst(&first,11);

    DisplayPerfect(first);
    
    return 0;
}