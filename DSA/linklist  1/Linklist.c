//////////////////////////////////////////////
///               LINKLIST               ////
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void insert_frist();

struct Node
{
    int Data;
    struct Node *next;
};

int main()
{
        struct Node *head = NULL;
        insert_frist(&head, 21);

}


void insert_frist(struct Node **head , int No)
{
    struct Node *N_Node = (struct Node*) malloc (Sizeof(struct node));

    N_Node->Data = No ;
    N_Node->next = NULL;

    if(*head == Null)
    {
        *head = N_Node;
    }
    else
    {
        *head->Next = N_Node;
    }

}
