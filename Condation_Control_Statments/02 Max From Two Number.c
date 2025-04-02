////////////////////////////////////////////////////////////
///        TO FIND SUM OF GIVER NUMBER WITH TEMP        ///
///////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int main()
{

        int No1 = 0, No2 = 0;

        printf("\n============*******=============\n");

        printf ("\n Enter a no1 = ");
        scanf("%d",&No1);

        printf ("\n Enter a no2 = ");
        scanf("%d",&No2);

        (No1==No2) ? printf("\n\n Both Numbers Are equal") : (No1 > No2) ? printf ("\n\n %d is greater ",No1): printf ("\n\n %d is greater ",No2);

        printf("\n\n============*******=============");

        printf("\n\n\t Thanks !!!\n");

        getch();
        return 0;
}
