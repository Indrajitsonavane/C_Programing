////////////////////////////////////////////////////////////
///             TO FIND SPECIFIC DIGIT IN NUMBER        ///
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
        int No = 0, rev = 0 ,temp = 0 ,Dig = 0 ;

    up:

        printf("\nEnter a Number To print Its reverse number => ");
        scanf("%d",&No);

        if (No  < 0 )
        {
            system("cls");
            goto up;
        }

        temp = No ;

        while (temp > 0)
        {
            Dig =  temp % 10 ;
            rev = (rev * 10 )+ Dig ;
            temp = temp / 10 ;
        }

            printf(" \n\n  The reverse number is => %d ",rev);


    getch ();
    return 0;
}
