/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Description : Write a program which displays product of each element without considering 0 in the element from singly linear linked list.
//
//      Input Linked List : |11|->|20|->|32|->|41|
//
//      Output            : 1       2       6       4
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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

void DisplayProduct(PNODE first)
{
    int iDigit = 0 , iMult = 1;
    PNODE temp = NULL;
    temp = first;

    while(temp != NULL)
    {
        iMult = 1;  

        while(temp->data != 0)
        {
            iDigit = (temp->data) % 10;

            if(iDigit != 0)
            {
                iMult = iMult * iDigit;
            }

            temp->data = temp->data / 10;
        }

        printf("%d\t",iMult);
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

    InsertFirst(&head , 41);
    InsertFirst(&head , 32);
    InsertFirst(&head , 20);
    InsertFirst(&head , 11);

    Display(head);

    DisplayProduct(head);
    
    return 0;
}