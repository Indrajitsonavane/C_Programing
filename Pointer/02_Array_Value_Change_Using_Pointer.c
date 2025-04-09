/// Array value changing using Pointer with Dobal pointer

#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5] = {1,2,3,4,5} , i = 0;
    int *ptr = num;
    int **ptr1 = ptr;


    printf("\n value before assigned ptr ");
    getch();

    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n\n Array  => %d",num[i]);
    }


    printf("\n value  assigned to ptr1 using scanf ");
    getch();
    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n Array %d =>",i+1);
        scanf("%d",&ptr1[i]);

    }

    printf("\n value  assigned to num array  ");

    ptr = num ;


    printf("\n print num affter ");
    getch();
    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n\n Array => %d",num[i]);
    }

    getch();
    return 0 ;
}
















/*

 for( i = 0 ; i < 5 ; i++)
    {
        printf("\n\n Array => %d",num[i]);
    }
    printf("\n Before assigning value ");
    getch();

    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n Array %d =>",i+1);
        scanf("%d",&ptr1[i]);

    }
    printf("\n value assigned to ptr ");
    getch();

    for( i = 0 ; i < 5 ; i++)
    {
        printf("\n\n Array => %d",num[i]);
    }
    printf("\n After assigning values to array using pointer "); */
