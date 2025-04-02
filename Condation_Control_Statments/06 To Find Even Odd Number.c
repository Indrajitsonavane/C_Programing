////////////////////////////////////////////////////////////
///              TO FIND EVEN ODD IN NUMBER             ///
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main ()
{
        int No=0;

    up:

        printf("\n\t==============******==============\n");

        printf("\n Enter A Number To Chack Its Even or Odd => ");
        scanf("%d",&No);

        printf("\n\t==============******==============\n");


        if (No <= 0)
        {
            system("cls");
            goto up;
        }
        if(No % 2==0)
        {
            printf("\n\t %d this number is even",No);
        }
        else
        {
            printf("\n\t %d this number is odd",No);
        }


                printf("\n\n\t\t!!!THANKS!!!");

    getch();
    return 0;
}
