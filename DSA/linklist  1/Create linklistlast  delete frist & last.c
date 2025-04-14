 /// create linklist inseart last

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void inseart_data();
void Display_LL();
void search_LL();
void Delete_frist();
void Delete_last();

struct node
{
    int deta;
    struct node *next;
};


int main()
{
        struct node *head = NULL ;

        Display_LL(head);

        inseart_data(&head , 1);

        inseart_data(&head , 2);

        inseart_data(&head , 3);

        inseart_data(&head , 4);

        Display_LL(head);

        //search_LL(&head , 3);

        // Delete_frist(&head);

        Delete_last(&head);

         Display_LL(head);

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
     }
     else
     {
         struct node *temp = *frist ;

          while(temp->next != NULL)
            {
               temp = temp->next;
            }
            temp->next = node_n ;
     }

    return 0;

}

void Display_LL(struct node *frist)
{
    if(frist == NULL)
    {
        printf("\n linkedlist is empty");
    }
    else
    {
        printf(" \n Display Elements = ");
        while(frist != NULL)
        {
            printf("\t %d ",frist->deta);
            frist = frist->next ;
        }
    }
}

void search_LL(struct node **frist , int no)
{
    int index = 1 ;
   struct node *temp1 = *frist ;


     if(frist == NULL)
        {
            printf("\n linkedlist is empty \n");
        }
        else
        {
            while(temp1 != NULL)
            {
                if(temp1->deta == no)
                {
                     printf("\t\n search element is  : %d Index is : %d \n ",temp1->deta , index);
                     printf("\n inside search");
                }

                index++;
                temp1 = temp1 -> next ;
            }
        }

    return ;
}

void Delete_frist(struct node **frist )
{

     if(NULL == *frist)
     {
        printf("\n linkedlist Is empty ");

     }
     else
     {
         struct node *temp = *frist ;

         *frist = temp->next ;
         printf(" \n Frist Node is Deleted sucessful ");
         free(temp);

     }
}

void Delete_last(struct node **frist )
{

     if(NULL == *frist)
     {
        printf("\n linkedlist Is empty ");
     }
     else
     {

        struct node *temp = *frist ;

                if(temp->next != NULL)
                {
                    while(temp->next->next != NULL)
                    {
                        temp = temp->next;
                    }

                    printf(" \n Dleted last Node %d  ",temp->next->deta);

                    free(temp->next);

                    temp->next = NULL;

                }
                else
                {

                    printf(" \n Dleted last Node %d ",temp->deta);

                    free(temp);
                    *frist = NULL ;

                }

     }
}
