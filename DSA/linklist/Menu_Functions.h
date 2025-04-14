

#include"Heder_file.h"
#include"login.h"

void menu();
void submenu();


void menu()
{
    int choice = 0 ;

    while(1)
    {
        if( Admin )
        {
            if( fp == NULL  )
            {
             printf("\n\t\t\t\t\t\t\t\t\t\t\t 1) Shop Add");
            }
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 2) Add User");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 3) Add Staff");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 4) Add Stock");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 5) Print Bill");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 6) Shop Expence");
            scanf("%d",&choice);

        }
        else if( manaeger )
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 1) Add Stock");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 3) Print Bill");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 3) Shop Expence");
            scanf("%d",&choice);

        }
        else if( user )
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t\t 1) Print Bill");
            scanf("%d",&choice);
        }


    switch(choice)
    {
        case 1 :


            break

        case 2 :


            break

        case 3 :


            break

        case 4 :


            break

        case 5 :


            break

    }
}
    return;
}

void submenu(  user role )
{
    if()
    {

    }
}
