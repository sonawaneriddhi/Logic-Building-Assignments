///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which search first occurance of particular element from singly linear linked list.
//
//      Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
//
//      Input Element     : 30
//      Output            : 3
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

int SearchFirstOcc(PNODE head, int iNo)
{
    int iFirst = 0;

    while(head != NULL)
    {
        iFirst++;
        if(head->data == iNo)
        {
            break;
        }
        head = head->next;
    }

    return iFirst;
}

int main()
{
    PNODE first = NULL;
    int iSearch = 0;
    int iRet = 0;
    Insertfirst(&first,70);
    Insertfirst(&first,30);
    Insertfirst(&first,50);
    Insertfirst(&first,40);
    Insertfirst(&first,30);
    Insertfirst(&first,20);
    Insertfirst(&first,10);

    printf("Enter element to find First Occurance : ");
    scanf("%d",&iSearch);

    iRet = SearchFirstOcc(first,iSearch);
    printf("First Occurance of %d is : %d",iSearch,iRet);
    return 0;
}