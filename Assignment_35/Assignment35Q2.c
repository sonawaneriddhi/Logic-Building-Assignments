///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which displays the prime element from singly linear linked list.
//
//      Input Linked List : |11|->|20|->|17|->|41|->|22|->|89|
//
//      Output            : 11      17      41      89
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

void DisplayPrime(PNODE head)
{
    int iSum = 0;
    int iCnt = 0;
    
    BOOL bFlag = TRUE;

    while(head != NULL)
    {
        bFlag = TRUE;

        for(iCnt = 2; iCnt <= ((head->data) / 2); iCnt++)
        {
            if(head->data % iCnt == 0)
            {
                bFlag = FALSE;
                break;
            }
        }

        if(bFlag == TRUE)
        {
            printf("%d\t",head->data);
        }

        head = head->next;
    }   
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |",head->data);
        head= head->next;
    }
}

int main()
{
    PNODE first = NULL;
    int iSearch = 0;
    int iRet = 0;
    Insertfirst(&first,89);
    Insertfirst(&first,22);
    Insertfirst(&first,41);
    Insertfirst(&first,17);
    Insertfirst(&first,20);
    Insertfirst(&first,11);

    DisplayPrime(first);
    
    return 0;
}