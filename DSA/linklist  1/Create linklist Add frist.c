/// create linklist inseart frist

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void inseart_data();
void Display_LL();
void search_LL();

struct node
{
    int deta;
    struct node *next;
};


int main()
{
        struct node *head = NULL ;

        Display_LL(head);

        inseart_data(&head , 21);

        inseart_data(&head , 451);

        inseart_data(&head , 16);

        inseart_data(&head , 2);

        Display_LL(head);

         search_LL(&head , 21);



    getch();
    return 0 ;
}

void inseart_data(struct node **frist , int no )
{
    struct node *node_n = (struct node*)malloc(sizeof(struct node));


    node_n->deta = no;
    node_n->next = NULL;

     if(NULL == *frist)
     {
         *frist = node_n;
         printf(" \n inside if \n");
     }
     else
     {
         node_n->next = *frist;
         *frist = node_n;
          printf(" \n inside else \n");
     }

    return ;

}

void Display_LL(struct node *frist)
{
    if(frist == NULL)
    {
        printf("\n linkedlist is empty");
    }
    else
    {
        while(frist != NULL)
        {
            printf("\t %d ",frist->deta);
            frist = frist->next ;
        }
    }
}

void search_LL(struct node **frist ,int no)
{

  int index = 1 ;
   struct node *temp1 = *frist ;


     if(frist == NULL)
        {
            printf("\n linkedlist is empty");
        }
        else
        {
            while(temp1 != NULL)
            {
                if(temp1->deta == no)
                {
                     printf("\t\n search element is  : %d Index is : %d ",temp1->deta , index);
                     printf("\n inside search");
                }

                index++;
                temp1 = temp1 -> next ;
            }
        }

    return ;
}

