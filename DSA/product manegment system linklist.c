#include<stdio.h>
#include<conio.h>
#include<stdio.h>

struct node
{
    int deta;
    struct node *next;

};

void search(struct node *head)
{
    int item = 0 , index = 0 , i = 0;

    printf("\n Enter a deta to find in linklist = ");
    scanf("%d",&item);

     while (head != NULL)
    {
         if(head->deta == item)
        {
          printf ("\n index of node %d: %d ", i + 1 ,index);
        }
        else if(head->deta != item)
        {
            printf("error");
        }
        head = head->next;
        index++;
    }

}

void display(struct node *head)
{
    int i = 0 ;

    ///display node
    while (head != NULL)
    {
        printf ("\n deta in node %d : %d ",i++, head->deta);
        head = head->next;

    }

}


int main()
{

    int i = 0 ;

    struct node* head ;
    struct node* node1;
    struct node* node2;
    struct node* node3;
    struct node* node4;

    head = (struct node*)malloc(1 * sizeof(struct node));
    node1 = (struct node*)malloc(1 * sizeof(struct node));
    node2 = (struct node*)malloc(1 * sizeof(struct node));
    node3 = (struct node*)malloc(1 * sizeof(struct node));
    node4 = (struct node*)malloc(1 * sizeof(struct node));

    head-> next = node1;
    node1->next =node2 ;
    node2->next = node3 ;
    node3->next = node4 ;
    node4 ->next = NULL ;

    head ->deta = 10 ;
    node1->deta = 20 ;
    node2->deta = 30;
    node3->deta = 40 ;
    node4->deta = 50 ;


    display(head);
    search(head);

    getch();
    return 0 ;
}
